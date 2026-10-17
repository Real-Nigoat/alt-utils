#include <iostream>
#include <string>
#include <filesystem>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Please enter a file to get info from\n";
        return 1;
    }
    std::string file = argv[1];
    std::string path = std::filesystem::path(argv[1]);
    // test:
  //  std::cout << argv[1];
  //  doesnt work but atleast it gets file extension for now
    std::cout << file.substr(file.find_last_of("."));
    // if (file.substr(file.find_last_of())
    return 0;
}
