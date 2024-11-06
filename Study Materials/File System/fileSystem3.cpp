#include <iostream>
#include <vector>

using namespace std;

class File {
public:
  File(string name, string content) : name(name), content(content) {}

  string getName() { return name; }
  string getContent() { return content; }
  void setContent(string content) { this->content = content; }

private:
  string name;
  string content;
};

class FileSystem {
public:
  FileSystem() {}

  void createFile(string name, string content) {
    File file(name, content);
    files.push_back(file);
  }

  string readFile(string name) {
    for (File file : files) {
      if (file.getName() == name) {
        return file.getContent();
      }
    }

    return "";
  }

  File* getFile(string name) {
    for (File file : files) {
      if (file.getName() == name) {
        return &file;
      }
    }

    return nullptr;
  }

  void modifyFile(string name, string content) {
    File* file = getFile(name);
    if (file != nullptr) {
      file->setContent(content);
    }
  }

  void copyFile(string sourceName, string destinationName) {
    File* sourceFile = getFile(sourceName);
    if (sourceFile != nullptr) {
      File destinationFile(destinationName, sourceFile->getContent());
      files.push_back(destinationFile);
    }
  }

  void moveFile(string sourceName, string destinationName) {
    File* sourceFile = getFile(sourceName);
    if (sourceFile != nullptr) {
      files.erase(remove(files.begin(), files.end(), *sourceFile));

      File destinationFile(destinationName, sourceFile->getContent());
      files.push_back(destinationFile);
    }
  }
  void deleteFile(string name) {
    File* file = getFile(name);
    if (file != nullptr) {
      files.erase(remove(files.begin(), files.end(), *file));
    }
  }

private:
  vector<File> files;
};

int main() {
  FileSystem fileSystem;

  fileSystem.createFile("test.txt", "Hello, world!");

  string content = fileSystem.readFile("test.txt");
  cout << content << endl;

  fileSystem.modifyFile("test.txt", "Hello, universe!");

  content = fileSystem.readFile("test.txt");
  cout << content << endl;

  fileSystem.copyFile("test.txt", "copy.txt");

  content = fileSystem.readFile("copy.txt");
  cout << content << endl;

  fileSystem.moveFile("copy.txt", "moved.txt");

  content = fileSystem.readFile("moved.txt");
  cout << content << endl;

  fileSystem.deleteFile("test.txt");

  content = fileSystem.readFile("test.txt");
  cout << content << endl;

  return 0;
}