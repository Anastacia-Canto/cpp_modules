
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {}
BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs) { return *this; }
BitcoinExchange::~BitcoinExchange(void) {}

std::map<std::string, double> BitcoinExchange::getData(const char * file, const char * sep) {

	std::map<std::string, double> dataMap;
	std::string line;
	
	std::fstream data;

	data.open(file);

	while( std::getline(data, line)){
		std::size_t pos = line.find(sep);
		std::string key = line.substr(0, pos - 1);
		std::string stringValue = line.substr(pos + 1);
		double value = std::strtod(stringValue.c_str(), NULL);
		dataMap.insert({ key, value });
	}
	data.close();

	return dataMap;
}

void BitcoinExchange::getValues(char * file) {
	std::map<std::string, double> prices = BitcoinExchange::getData("data.csv", ",");

	std::map<std::string, double>::iterator it = prices.begin();

	while (it != prices.end()) {
		std::cout << it->first << " \t" << it->second << std::endl;
		it++;
	}

	// the idea here is navigate through the inputFile checking for values on the map

	// std::fstream inputFile(file);

	// if (inputFile.is_open()) {
	// 	std::string line;

	// 	while (std::getline(inputFile, line)) {

	// 	}
	// }

	// inputFile.close();


}