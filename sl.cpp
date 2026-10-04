/* SPDX-License-Identifier: GPL-3.0-only
 * Copyright (C) 2026 alt-utils
 */

#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::filesystem::path path = "."; //sets path to current directory
		for (const auto& entry : std::filesystem::directory_iterator(path)) {
			std::cout << entry.path().filename() << "\n";
		}
	}

	else if (argc == 2) {
	/*basically the same code as the the top, except this one prints files/folders inside the directory
	specified*/
	std::filesystem::path new_path = argv[1];
	for (const auto& entry : std::filesystem::directory_iterator(new_path)) {
		std::cout << entry.path().filename() << "\n";
	}
	}
	return 0; // felt satysfying writing this when i was finally done
}