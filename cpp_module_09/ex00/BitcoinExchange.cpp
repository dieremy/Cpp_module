//
// Created by test on 8/10/24.
//

#include "BitcoinExchange.hpp"

bool BitcoinExchange::validFormat(std::string line) {
	char s[line.length() + 1];
	bool ret;

	strcpy(s, line.c_str());
	if (s[4] != '-' && s[7] != '-' && s[10] != ',') return false;

	const char* sub = line.substr(11, line.length() + 1).c_str();
	char* endptr;
	float f = strtof(sub, &endptr);
	*endptr = '\0';
	if (f < 0.0 && f > 1000.0) return false;

	for (size_t i = 0; i < line.length() + 1; i++) { ret = (isalpha(s[i]) ? false : true); }

	return ret;
}

void BitcoinExchange::loadData(std::string data_file) {
	std::ifstream file(data_file.c_str());
	std::string line;

//	Skip the first line
	std::string firstLine;
	std::getline(file, firstLine);

	try {
		if (file.is_open()) {
			while (std::getline(file, line)) {
				if (!this->validFormat(line)) throw CorruptedDataFile();

				std::string date = line.substr(0, 10).erase(4, 1).erase(6, 1);
				this->map.insert(std::make_pair(date, 0.0));
			}
		} else throw DataFileError();
	} catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
	for (std::map<std::string, float>::iterator it = this->map.begin(); it != this->map.end(); it++) {
		printf("map.it.first ---> |%s| = map.it.second ---> |%f|\n", it->first.c_str(), it->second);
	}
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}
