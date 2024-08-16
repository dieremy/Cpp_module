//
// Created by test on 8/10/24.
//

#include "BitcoinExchange.hpp"


float BitcoinExchange::findDate() {
	std::map<std::string, float>::iterator it = this->_map.lower_bound(this->_input_date);

	if (it == this->_map.end() || it->first != this->_input_date) {
		if (it != this->_map.begin()) --it;
		else return -1;
	}

	return it->second;
}

std::string BitcoinExchange::checkInput(std::string line) {
	bool has_decimal_point = false;

	if (line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return "Error: bad input => " + line;

	this->_input_date = line.substr(0, 10);

	for (size_t i = 0; i < this->_input_date.length(); i++)
		if (!isdigit(this->_input_date[i]) && this->_input_date[i] != '-')
			return "Error: bad input: date must have digits.";

	try {
		this->_year = std::stoi(line.substr(0, 4));
		this->_month = std::stoi(line.substr(5, 2));
		this->_day = std::stoi(line.substr(8, 2));
	}
	catch (const std::exception &e) {
		return "Error: bad input: invalid date.";
	}

	if (this->_year < 2009 || this->_year > 2024) return "Error: bad input: year is not valid.";
	if (this->_month < 1 || this->_month > 12) return "Error: bad input: month is not valid.";
	if (this->_day < 1 || this->_day > 31) return "Error: bad input: day is not valid.";

	for (size_t i = 13; i < line.length(); ++i) {
		if (std::isdigit(line[i])) continue;
		else if (line[i] == '.') {
			if (has_decimal_point)
				return "Error: bad input: value must have digits.";
			has_decimal_point = true;
		} else return "Error: bad input: value must have digits.";
	}

	this->_multiplier = std::atof(line.substr(13).c_str());
	if (this->_multiplier < 0.0) return "Error: not a positive number.";
	if (this->_multiplier > 1000.0) return "Error: too large a number.";

	this->_multiplicand = this->findDate();
	if (this->_multiplicand == -1) return "Error: no valid date found.";

	return "0Kills";
}

bool BitcoinExchange::validFormat(std::string line) {
	bool has_decimal_point = false;
	bool ret;

	if (line[4] != '-' || line[7] != '-' || line[10] != ',') return false;

	for (size_t i = 11; i < line.length(); ++i) {
		if (std::isdigit(line[i])) continue;
		else if (line[i] == '.') {
			if (has_decimal_point) return false;
			has_decimal_point = true;
		} else return false;
	}

	this->_data_date = line.substr(0, 10);
	for (size_t i = 0; i < this->_data_date.length(); i++) { ret = (isdigit(this->_data_date[i]) ? false : true); }

	return !ret;
}

void BitcoinExchange::loadData(std::string data_file) {
	std::ifstream file(data_file.c_str());
	std::string line;

	std::string firstLine;
	std::getline(file, firstLine);

	try {
		if (file.is_open()) {
			while (std::getline(file, line)) {
				try {
					if (!this->validFormat(line)) throw CorruptedDataFile();
				}
				catch (const CorruptedDataFile &e) {
					std::cerr << "Error: " << e.what() << std::endl;
					return;
				}
				std::string date = line.substr(0, 10);
				float value = std::atof(line.substr(11).c_str());
				this->_map[date] = value;
			}
		} else throw DataFileError();
	}
	catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
}

void BitcoinExchange::calculate() {
	std::ifstream file(this->_multi_file);
	std::string line;
	float res;

	std::string firstLine;
	std::getline(file, firstLine);

	if (firstLine != "date | value") {
		std::cerr << "Error: bad input: header not present." << std::endl;
		return;
	}

	try {
		if (file.is_open()) {
			while (std::getline(file, line)) {
				std::string exitStr = this->checkInput(line);
				if (exitStr != "0Kills") {
					std::cout << exitStr << std::endl;
					continue;
				}
				res = this->_multiplicand * this->_multiplier;
				std::cout << this->_year << "-" << (this->_month < 10 ? "0" : "") << this->_month << "-"
						  << (this->_day < 10 ? "0" : "") << this->_day << " => "
						  << this->_multiplier << " = " << res << std::endl;
			}
		} else throw DataFileError();
	}
	catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
}
