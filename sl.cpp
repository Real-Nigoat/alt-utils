#include <iostream>
#include <filesystem>

int main(int argc, char* argv[]) {
	const char* path = (argc > 1) ? argv[1] : ".";

	std::filesystem::directory_iterator = (path);
	if (!dir) {
		perror("opendir")
			return 1;
	}

	struct dirent *entry;
	entry = readdir(dir);
	char *asdf = (*entry).d_name;
	std::cout << entry->d_name;

	return 0;
}