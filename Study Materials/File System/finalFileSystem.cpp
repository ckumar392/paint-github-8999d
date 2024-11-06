#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
using namespace std;
class File
{
public:
    File(std::string name, std::string content) : name(name), content(content) {}

    std::string getName() const { return name; }
    std::string getContent() const { return content; }
    void setContent(const std::string &newContent) { content = newContent; }

private:
    std::string name;
    std::string content;
};

class Directory
{
public:
    Directory(std::string name) : name(name) {}

    std::string getName() const { return name; }

    void createFile(std::string name, std::string content)
    {
        files[name] = std::make_shared<File>(name, content);
    }

    std::shared_ptr<File> getFile(std::string name)
    {
        if (files.find(name) != files.end())
        {
            return files[name];
        }
        return nullptr;
    }

    bool deleteFile(std::string name)
    {
        auto it = files.find(name);
        if (it != files.end())
        {
            files.erase(it);
            return true;
        }
        return false;
    }

    bool modifyFile(std::string name, std::string content)
    {
        auto file = getFile(name);
        if (file)
        {
            file->setContent(content);
            return true;
        }
        return false;
    }

    bool copyFile(std::string name, std::shared_ptr<Directory> destination)
    {
        auto file = getFile(name);
        if (file)
        {
            destination->createFile(file->getName(), file->getContent());
            return true;
        }
        return false;
    }

    bool moveFile(std::string name, std::shared_ptr<Directory> destination)
    {
        auto file = getFile(name);
        if (file)
        {
            destination->createFile(file->getName(), file->getContent());
            files.erase(name);
            return true;
        }
        return false;
    }

private:
    std::string name;
    std::map<std::string, std::shared_ptr<File>> files;
};

class FileSystem
{
public:
    FileSystem()
    {
        root = std::make_shared<Directory>("/");
        currentDirectory = root;
    }

    std::shared_ptr<Directory> getCurrentDirectory()
    {
        return currentDirectory;
    }

private:
    std::shared_ptr<Directory> root;
    std::shared_ptr<Directory> currentDirectory;
};

int main()
{
    FileSystem fs;

    while (true)
    {
        std::string command;
        std::cout << fs.getCurrentDirectory()->getName() << "> ";
        std::cin >> command;

        if (command == "createfile")
        {
            cout << "\nEnter the file name --> ";
            std::string name;
            std::cin >> name;
            cout << "\nEnter the file contents--> ";

            std::string content;
            std::cin.ignore();
            std::getline(std::cin, content);
            fs.getCurrentDirectory()->createFile(name, content);
            cout << "\nFile created sucessfully !!" << endl;
        }
        else if (command == "readfile")
        {
            std::string name;
            cout << "\nEnter the file name to read --> ";
            std::cin >> name;
            auto file = fs.getCurrentDirectory()->getFile(name);

            if (file)
            {
                cout << "The given fuile contains the following data-->" << endl;
                std::cout << file->getContent() << std::endl;
            }
            else
            {
                std::cout << "File not found." << std::endl;
            }
        }
        else if (command == "modify")
        {
            std::string name;
            cout << "\nEnter the name of the file to be modified--> ";
            std::cin >> name;
            cout << "\nEnter the modifided data --> ";
            std::string content;
            std::cin.ignore();
            std::getline(std::cin, content);
            if (fs.getCurrentDirectory()->modifyFile(name, content))
            {
                std::cout << "File modified." << std::endl;
            }
            else
            {
                std::cout << "File not found." << std::endl;
            }
        }
        else if (command == "copy")
        {
            std::string name;
            std::cin >> name;
            std::string destinationName;
            cout << "Enter the destination address --> ";
            std::cin >> destinationName;
            auto destination = fs.getCurrentDirectory();
            if (destinationName != ".")
            {
                // Handle destination directory logic here.
            }
            if (fs.getCurrentDirectory()->copyFile(name, destination))
            {
                std::cout << "File copied." << std::endl;
            }
            else
            {
                std::cout << "File not found." << std::endl;
            }
        }
        else if (command == "move")
        {
            std::string name;
            std::cin >> name;
            std::string destinationName;
            std::cin >> destinationName;
            auto destination = fs.getCurrentDirectory();
            if (destinationName != ".")
            {
                // Handle destination directory logic here.
            }
            if (fs.getCurrentDirectory()->moveFile(name, destination))
            {
                std::cout << "File moved." << std::endl;
            }
            else
            {
                std::cout << "File not found." << std::endl;
            }
        }
        else if (command == "delete")
        {
            std::string name;
            std::cin >> name;
            if (fs.getCurrentDirectory()->deleteFile(name))
            {
                std::cout << "File deleted." << std::endl;
            }
            else
            {
                std::cout << "File not found." << std::endl;
            }
        }
        else if (command == "exit")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}
