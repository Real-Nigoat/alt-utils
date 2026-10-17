#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    const char *path = (argc > 1) ? argv[1] : "."; // set path to . if user didnt specify a path, unless he did specifiy one
    DIR *dir = opendir(path);
    if (!dir) {
        perror("opendir"); // error handling
        return 1;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
  printf("%s\n", entry->d_name); // print the stuff inside your directory
    }       
   
    return 0;
}