//
// Created by test on 8/10/24.
//

#include "BitcoinExchange.hpp"

void BitcoinExchange::printDebug() {
	for (std::map<std::string, float>::iterator it = this->_map.begin(); it != this->_map.end(); it++) {
		printf("map.it.first ---> |%s| = map.it.second ---> |%f|\n", it->first.c_str(), it->second);
	}
}

float BitcoinExchange::findDate() {
	std::stringstream newDate;
	float found = -1;
	std::map<std::string, float>::iterator it = this->_map.find(this->_input_date);
//	std::cout << this->_year << " " << this->_month << " " << this->_day << std::endl;

	if (it != this->_map.end()) found = it->second;
	else {
		while (this->_year >= 2009) {
			this->_day--;
			if (this->_day == 0) {
				this->_month--;
				if (this->_month == 0) {
					this->_year--;
					this->_month = 12;
				}
			}
			if (this->_month >= 1 && this->_month <= 9)
				newDate << this->_year << "0" << this->_month << this->_day;
			if (this->_day >= 1 && this->_day <= 9)
				newDate << this->_year << this->_month << "0" << this->_day;
			if ((this->_month >= 1 && this->_month <= 9) && (this->_day >= 1 && this->_day <= 9))
				newDate << this->_year << "0" << this->_month << "0" << this->_day;
			else
				newDate << this->_year << this->_month << this->_day;
	std::cout << "!!!!!!!!!!!!!!!!!!!!" << newDate.str() << std::endl;
			it = this->_map.find(newDate.str());
			if (it != this->_map.end()) {
				found = it->second;
				break;
			} else continue ;
		}
	}
//	else {
//		while (this->_year >= 2009 && this->_year <= 2024) {
//			while (this->_month >= 1 && this->_month <= 12) {
//				while (this->_day >= 1 && this->_day <= 31) {
//					this->_day -= 1;
//					newDate << this->_year << this->_month << this->_year;
//					it = this->_map.find(newDate.str());
//					if (it == this->_map.end()) continue;
//					else {
//						std::cout << "-------------> " << it->second << std::endl;
//						found = it->second;
//						break;
//					}
//				}
//				this->_month -= 1;
//			}
//			this->_year -= 1;
//		}
//	}

	return found;
}

std::string BitcoinExchange::checkInput(std::string line) {
	bool has_decimal_point = false;

	if (line[4] != '-' || line[7] != '-' || line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return "Error: bad input => " + line;

	this->_input_date = line.substr(0, 10).erase(4, 1).erase(6, 1);
//	std::cout << "|" << this->_input_date << "|" << std::endl;
//	std::cout << std::endl;

	for (size_t i = 0; i < this->_input_date.length(); i++) {
//		std::cout << "|" << this->_input_date[i] << "|" << std::endl;
		if (!isdigit(this->_input_date[i]))
			return "Error: bad input: date must have digits.";
	}

	this->_year = std::stoi(line.substr(0, 4));
	if (this->_year < 2009 || this->_year > 2024) return "Error: bad input: year is not valid.";

	this->_month = std::stoi(line.substr(5, 7));
	if (this->_month < 1 || this->_month > 12) return "Error: bad input: month is not valid.";

	this->_day = std::stoi(line.substr(8, 10));
	if (this->_day < 1 || this->_day > 31) return "Error: bad input: day is not valid.";
	std::cout << "========================= " << this->_year << " " << this->_month << " " << this->_day << std::endl;

	for (size_t i = 13; i < line.length(); ++i) {
		if (std::isdigit(line[i])) continue;
		else if (line[i] == '.') {
			if (has_decimal_point)
				return "Error: bad input: value must have digits.";
			has_decimal_point = true;
		} else return "Error: bad input: value must have digits.";
	}

	this->_multiplier = std::stof(line.substr(13).c_str());
	if (this->_multiplier < 0.0) return "Error: bad input: negative number.";
	if (this->_multiplier > 1000.0) return "Error: bad input: too large number.";

	this->_multiplicand = this->findDate();

	return "0kills";
}

bool BitcoinExchange::validFormat(std::string line) {
	bool has_decimal_point = false;
	bool ret;

	if (line[4] != '-' || line[7] != '-' || line[10] != ',') return false;

	for (size_t i = 11; i < line.length(); ++i) {
		if (std::isdigit(line[i]))
			continue;
		else if (line[i] == '.') {
			if (has_decimal_point)
				return false;
			has_decimal_point = true;
		} else return false;
	}

	this->_data_date = line.substr(0, 10).erase(4, 1).erase(6, 1);
	for (size_t i = 0; i < this->_data_date.length() + 1; i++) { ret = (isdigit(this->_data_date[i]) ? false : true); }

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
				try {
					if (!this->validFormat(line)) throw CorruptedDataFile();
				} catch (const CorruptedDataFile &e) {
					std::cerr << "Error: " << e.what() << std::endl;
					return;
				}
				this->_map.insert(std::make_pair(this->_data_date, 0.0));
			}
		} else throw DataFileError();
	} catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
//	this->printDebug();
}

void BitcoinExchange::calculate() {
	std::ifstream file(this->_multi_file);
	std::string line;
	float res;

//	Skip the first line
	std::string firstLine;
	std::getline(file, firstLine);
//	std::cout << "|" << firstLine << "|" << std::endl;
	if (strcmp(firstLine.c_str(), "date | value") != 0) {
		std::cerr << "Error: bad input: header not present." << std::endl;
		return;
	}

	try {
		if (file.is_open()) {
			while (std::getline(file, line)) {
				std::string exitStr = this->checkInput(line);
				if (exitStr != "0kills") {
					std::cout << exitStr << std::endl;
					continue;
				}
				res = this->_multiplicand * this->_multiplier;
				std::cout << this->_year << "-" << this->_month << "-" << this->_day << " => "
						  << this->_multiplier << " = " << res << std::endl;
			}
		} else throw DataFileError();
	} catch (const DataFileError &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return;
	}
}
