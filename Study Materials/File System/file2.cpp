#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>

class File {
public:
    File(std::string name, std::string content) : name(name), content(content) {}
    std::string getName() const { return name; }
    std::string getContent() const { return content; }
    void setContent(const std::string& newContent) { content = newContent; }

private:
    std::string name;
    std::string content;
};

class Directory {
public:
    Directory(std::string name) : name(name) {}

    std::string getName() const { return name; }

    void createFile(std::string name, std::string content) {
        files[name] = std::make_shared<File>(name, content);
    }

    void createSubdirectory(std::string name) {
        subdirectories[name] = std::make_shared<Directory>(name);
    }

    std::vector<std::string> listContents() {
        std::vector<std::string> contents;
        for (const auto& entry : files) {
            contents.push_back(entry.first);
        }
        for (const auto& entry : subdirectories) {
            contents.push_back(entry.first + "/");
        }
        return contents;
    }

private:
    std::string name;
    std::map<std::string, std::shared_ptr<File> > files;
    std::map<std::string, std::shared_ptr<Directory> > subdirectories;
};

class FileSystem {
public:
    FileSystem() {
        root = std::make_shared<Directory>("/");
        currentDirectory = root;
    }

    void listCurrentDirectoryContents() {
        std::vector<std::string> contents = currentDirectory->listContents();
        for (const std::string& item : contents) {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }

    void createFile(std::string name, std::string content) {
        currentDirectory->createFile(name, content);
    }

    void createDirectory(std::string name) {
        currentDirectory->createSubdirectory(name);
    }

// private:
    std::shared_ptr<Directory> root;
    std::shared_ptr<Directory> currentDirectory;
};

int main() {
    FileSystem fs;

    while (true) {
        std::string command;
        std::cout << fs.currentDirectory->getName() << "> ";
        std::cin >> command;

        if (command == "ls") {
            fs.listCurrentDirectoryContents();
        } else if (command == "mkdir") {
            std::string name;
            std::cin >> name;
            fs.createDirectory(name);
        } else if (command == "touch") {
            std::string name;
            std::cin >> name;
            std::string content;
            std::cin.ignore();
            std::getline(std::cin, content);
            fs.createFile(name, content);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try 'ls', 'mkdir', 'touch', or 'exit'." << std::endl;
        }
    }

    return 0;
}
