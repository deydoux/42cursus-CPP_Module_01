#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: ./ft_sed [file] [search] [replace]" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string inFileName(argv[1]);
	std::ifstream inFile(inFileName);
	if (inFile.fail()) {
		std::cerr << "Can't open " << inFileName << " in file" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string outFileName(inFileName + ".replace");
	std::ofstream outFile(outFileName);
	if (inFile.fail()) {
		std::cerr << "Can't open " << outFileName << " out file" << std::endl;
		inFile.close();
		return (EXIT_FAILURE);
	}

	std::string search(argv[2]);
	std::string replace(argv[3]);
	std::stringstream stash;
	size_t i = 0;
	while (!inFile.eof()) {
		char c;

		inFile >> c;
		stash << c;

		if (search[i] == c) {
			if (search.size() == ++i) {
				outFile << replace;
				stash.str(std::string());
				i = 0;
			}
		} else {
			outFile << stash.rdbuf();
			i = 0;
		}
	}

	inFile.close();
	outFile.close();
}
