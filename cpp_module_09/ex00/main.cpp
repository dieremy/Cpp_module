#include "BitcoinExchange.hpp"

int main(int ac, char *av[]) {
	try {
		if (ac != 2) throw WrongArgsError();

		BitcoinExchange btc = BitcoinExchange();
		btc.loadData(av[1]);
	} catch (const WrongArgsError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 2;
	}

}