#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Please Enter a valid file\n";
    std::cout << "Example: ./main file.txt\n";
    return 1;
  }
  std::string file_name = argv[1];
  std::cout << " Counting lines, please wait...\n";
  std::ifstream opened_file;
  opened_file.open(file_name);
  std::string words;
  std::string lines;
  while (std::getline(opened_file, lines)) {
    std::cout << lines << "\n";
  }
  return 0;
}
