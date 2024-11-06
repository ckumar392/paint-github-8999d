#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
class File {
public:
    File(string name, string content) :name(name), content(content) {}
    string getName() const { return name; }
    string getContent() const { return content; }
    void setContent(const string& newContent) { content = newContent; }

private:
    string name;
    string content;
};

class Directory {
public:
    Directory(string name){}

    string getName() 
    {
        return name; 
    }

    void createFile(string name, string content) 
    {
        files[name] = make_shared<File>(name, content);
    }

    void createSubdirectory(string name) {
        subdirectories[name] = make_shared<Directory>(name);
    }

    shared_ptr<File> getFile(string name) {
        if (files.find(name) != files.end()) {
            return files[name];
        }
        return nullptr;
    }

    shared_ptr<Directory> getSubdirectory(string name) {
        if (subdirectories.find(name) != subdirectories.end()) {
            return subdirectories[name];
        }
        return nullptr;
    }

    vector<string> listContents() {
        vector<string> contents;
        for (const auto& entry : files) {
            contents.push_back(entry.first);
        }
        for (const auto& entry : subdirectories) {
            contents.push_back(entry.first + "/");
        }
        return contents;
    }

private:
    string name;
    map<string, shared_ptr<File> > files;
    map<string, shared_ptr<Directory> > subdirectories;
};

class FileSystem {
public:
    FileSystem() {
        root = make_shared<Directory>("/");
        currentDirectory = root;
    }

    void listCurrentDirectoryContents() {
        vector<string> contents = currentDirectory->listContents();
        for (const string& item : contents) {
            cout << item << " ";
        }
        cout << endl;
    }

    void createFile(string name, string content) {
        currentDirectory->createFile(name, content);
    }

    void createDirectory(string name) {
        currentDirectory->createSubdirectory(name);
    }

    void changeDirectory(string name) {
        shared_ptr<Directory> newDir = currentDirectory->getSubdirectory(name);
        if (newDir) {
            currentDirectory = newDir;
        } else {
            cout << "Directory not found." << endl;
        }
    }

// private:
    shared_ptr<Directory> root;
    shared_ptr<Directory> currentDirectory;
};

int main() {
    FileSystem fs;

    while (true) {
        string command;
        cout << fs.currentDirectory->getName() << "> ";
        cin >> command;

        if (command == "ls") {
            fs.listCurrentDirectoryContents();
        } else if (command == "mkdir") {
            string name;
            cin >> name;
            fs.createDirectory(name);
        } else if (command == "touch") {
            string name;
            cin >> name;
            string content;
            cin.ignore();
            getline(cin, content);
            fs.createFile(name, content);
        } else if (command == "cd") {
            string name;
            cin >> name;
            fs.changeDirectory(name);
        } else if (command == "exit") {
            break;
        } else {
            cout << "Invalid command. Try 'ls', 'mkdir', 'touch', 'cd', or 'exit'." << endl;
        }
    }

    return 0;
}

