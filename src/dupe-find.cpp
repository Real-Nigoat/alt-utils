/* SPDX-License-Identifier: GPL-3.0-only
 * Copyright (C) 2026 alt-utils
 */

// i made the code better, and working

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem; // this basically means "name std::filesystem to just fs"

    int main(int argc, char* argv[]) {
        fs::path directory;

        if (argc > 1 && argv[1][0] != '\0') {
            directory = argv[1];
        } else {
            directory = fs::current_path();
        }

        try {
            for (const auto& entry : fs::directory_iterator(directory)) {
                std::cout << entry.path().string() << '\n';
            }
            }
         catch (const fs::filesystem_error& e) {
            std::cerr << "Could not read directory: " << e.what() << '\n';
            return 1;
        }

        return 0;
    }
