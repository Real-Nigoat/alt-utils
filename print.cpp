/* SPDX-License-Identifier: GPL-3.0-only
 * Copyright (C) 2026 alt-utils
 */

/* so what this is, is basically just echo*/

#include <iostream>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Please enter what you want to print!\n";
		std::cout << "Eg: 'echo hello' and it will print hello!\n";
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i] << " ";
	}
}