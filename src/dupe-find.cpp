/* SPDX-License-Identifier: GPL-3.0-only
 * Copyright (C) 2026 alt-utils
 */

#include <filesystem>
#include <iostream>
#include <string>
#include <sys/stat.h> // this took me 2 hours to realize i needed to include this to make 'struct stat sb' work

namespace fs = std::filesystem; // this basically means "name std::filesystem to just fs"

int main(int argc, char *argv[]) {
    std::string path = argv[1];


    if (path.empty()) {
        std::string current_directory = fs::current_path(); // get user's current path
        struct stat sb;
        for (const auto& entry : fs::directory_iterator(current_directory)) {
            std::filesystem::path outfilename = entry.path();
                    std::string outfilename_str = outfilename.string();
                    const char* path = outfilename_str.c_str();
                    // testing whether the path points to a
                    // non-directory or not if it does it displays path
                    if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
                        std ::cout << path << std::endl;
        }
        // same thing, but if it doesnt have any path specified, it lists file in the current directory YOU are in.
    }


    struct stat sb;
    for (const auto& entry : fs::directory_iterator(path)) {
        std::filesystem::path outfilename = entry.path();
                std::string outfilename_str = outfilename.string();
                const char* path = outfilename_str.c_str();
                // testing whether the path points to a
                // non-directory or not if it does it displays path
                if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
                    std ::cout << path << std::endl;
    }

    return 0; // best line ever
}
