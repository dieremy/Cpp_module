//
// Created by test on 8/10/24.
//

#ifndef CPP_MODULE_BITCOINEXCHANGE_HPP
#define CPP_MODULE_BITCOINEXCHANGE_HPP

#include <sstream>
#include <stdio.h>
#include <iostream>
#include <map>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <string>
#include <unistd.h>

class BitcoinExchange {
private:
	std::map<std::string, float> _map;
	std::string _multi_file;
	std::string _data_date;
	std::string _input_date;
	int _year;
	int _month;
	int _day;
	float _multiplicand;
	float _multiplier;
public:

	void printDebug();

	float findDate();

	bool validFormat(std::string line);

	std::string checkInput(std::string line);

	void loadData(std::string data);

	void calculate();

	BitcoinExchange() {};

	BitcoinExchange(std::string multi) {
		this->_multi_file = multi;
		this->_multiplicand = 0.0;
		this->_multiplier = 0.0;
	};

	BitcoinExchange(const BitcoinExchange &btc) {};

	~BitcoinExchange() {};

	BitcoinExchange &operator=(const BitcoinExchange &btc) {
		if (this == &btc) return *(this);
		return *(this);
	}
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

class BadError : public std::exception {
public:
	const char *what() const throw() {
		return "Program Closed.";
	}
};

#endif //CPP_MODULE_BITCOINEXCHANGE_HPP
