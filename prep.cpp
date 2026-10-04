#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>

int main(int argc, char* argv[]) {
    if (argc < 3) {     // this is to know if you didnt include a file
        std::cout << "Please Enter a to prep file\n";
        std::cout << "Example: ./prep  'kevin' names.txt\n";
        return 1;
    }
    std::string word = argv[1]; 
    std::ifstream chosen_file;  
    chosen_file.open(argv[2]);
    std::string found;
    while (std::getline(chosen_file, found)) {
        if (found.find(word) != std::string::npos) {
            std::cout << found << "\n";
        }
    }
    return 0;
}