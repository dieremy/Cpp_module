//
// Created by test on 8/10/24.
//

#ifndef CPP_MODULE_BITCOINEXCHANGE_HPP
#define CPP_MODULE_BITCOINEXCHANGE_HPP

#include <stdio.h>
#include <iostream>
#include <map>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <string>

class BitcoinExchange {
private:
	std::map<std::string, float> map;
public:

	void loadData(std::string data);

	bool validFormat(std::string line);

	BitcoinExchange();

	BitcoinExchange(const BitcoinExchange &btc) {};

	~BitcoinExchange();

	BitcoinExchange &operator=(const BitcoinExchange &btc) {
		if (this == &btc) return *(this);
		return *(this);
	}

//	class DataFileNotFound : public std::exception {
//	public:
//		const char *what() const throw() {
//			return "File not found.";
//		}
//	};

	class BadError : public std::exception {
	public:
		const char *what() const throw() {
			return "Program Closed.";
		}
	};
};

class DataFileError : public std::exception {
public:
	const char *what() const throw() {
		return "File error.";
	}
};

class CorruptedDataFile : public std::exception {
public:
	const char *what() const throw() {
		return "Corrupted data file.";
	}
};

class WrongArgsError : public std::exception {
public:
	const char *what() const throw() {
		return "Wrong number of arguments.";
	}
};

#endif //CPP_MODULE_BITCOINEXCHANGE_HPP
