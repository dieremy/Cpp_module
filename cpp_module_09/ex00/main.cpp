#include "BitcoinExchange.hpp"

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 2;
	}

	if (access(av[1], F_OK) != 0) {
		std::cout << "Error: could not open file " << av[1] << std::endl;
		return 2;
	}
	
	if (access("data.csv", F_OK) != 0) {
		std::cout << "Error: could not open file data.csv" << std::endl;
		return 2;
	}

	BitcoinExchange btc = BitcoinExchange(av[1]);

	try {
		btc.loadData("data.csv");
	} catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 2;
	}

	try {
		btc.calculate();
	} catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 2;
	}

}