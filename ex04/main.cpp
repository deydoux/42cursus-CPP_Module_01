#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Usage: ./ft_sed [file] [search] [replace]" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string search(argv[2]);
	if (search.empty())
	{
		std::cerr << "Empty search not allowed" << std::endl;
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

	std::string replace(argv[3]);
	while (!inFile.eof()) {
		std::string line;
		std::getline(inFile, line);

		size_t start = 0;
		size_t end = line.find(search, start);
		while (std::string::npos != end) {
			outFile << line.substr(start, end - start) << replace;
			start = end + search.size();
			end = line.find(search, start);
		}

		outFile << line.substr(start) << std::endl;
	}

	inFile.close();
	outFile.close();
}
