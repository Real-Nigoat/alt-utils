/* SPDX-License-Identifier: GPL-3.0-only
 * Copyright (C) 2026 alt-utils
 */

#include <iostream>
#include <filesystem>

int main(void) {	// void for now
	std::filesystem::path path = "."; //sets path to current directory
	for (const auto& entry : std::filesystem::directory_iterator(path)) {
		std::cout << entry.path().filename() << "\n";
			}
}