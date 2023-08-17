
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) { *this = src; }
BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs) { (void)rhs; return *this; }
BitcoinExchange::~BitcoinExchange(void) {}

std::map<std::string, double> BitcoinExchange::getData(const char * file, const char * sep) {

	std::map<std::string, double> dataMap;
	std::string line;
	
	std::fstream data;

	data.open(file);

	while( std::getline(data, line)){
		std::size_t pos = line.find(sep);
		std::string key = line.substr(0, pos);
		std::string stringValue = line.substr(pos + 1);
		double value = std::strtod(stringValue.c_str(), NULL);
		// dataMap.insert({ key, value });
		dataMap[key] = value;
	}
	data.close();

	return dataMap;
}

bool BitcoinExchange::isValidFormat(std::string line) {
	std::string date = line.substr(0, 10);

	const char * cdate = date.c_str();
	int countErrors = 0;
	for (int i = 0; i < 10; i++) {
		if (std::isdigit(cdate[i]) == 0 && cdate[i] != '-') {
			countErrors++;
		}
	}

	struct tm result;
	if (countErrors > 0 || !strptime(cdate, "%Y-%m-%d", &result) || line.compare(10, 3, " | ") != 0 || line.substr(13).empty()) {
		std::cout << "Error: bad input => " << line  << std::endl;
		return false;
	}
	return true;
}

bool BitcoinExchange::isValidValue(std::string line) {
	std::string value = line.substr(13);

	const char * cvalue = value.c_str();
	int countErrors = 0;
	for (unsigned int i = 0; i < value.length(); i++) {
		if (std::isdigit(cvalue[i]) == 0 && cvalue[i] != '-' && cvalue[i] != '+' && cvalue[i] != '.') {
			countErrors++;
		}
	}

	if (countErrors > 0) {
		std::cout << "Error: bad input => " << line  << std::endl;
		return false;
	}

	double dValue = strtod(value.c_str(), NULL);
	if (errno == ERANGE || dValue > 1000.0) {
		std::cout << "Error: too large number." << std::endl;
		return false;
	} else if (dValue < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::getValues(char * file) {
	std::map<std::string, double> prices = BitcoinExchange::getData("data.csv", ",");

	std::fstream inputFile(file);

	if (inputFile.is_open()) {
		std::string line;

		while (std::getline(inputFile, line)) {
			if (line.empty()) {
				std::cout << std::endl;
				continue ;
			}
			
			if (!BitcoinExchange::isValidFormat(line)) {
				continue ;
			}

			if (!BitcoinExchange::isValidValue(line)) {
				continue ;
			}
			std::string key = line.substr(0, 10);
			double value = strtod(line.substr(13).c_str(), NULL);

			std::map<std::string, double>::iterator ft = prices.find(key);
			if (ft != prices.end()) {
				std::cout << key << " => " << value << " = " << prices[key] * value << std::endl;
			} else {
				
				ft = prices.begin();
				while (ft != prices.end()) {
					if (ft->first > key) {
						break ;
					}
					ft++;
				}
				if (ft != prices.begin()) {
					ft--;
				}
				std::cout << key << " => " << value << " = " << ft->second * value << std::endl;
			}
		}
	}
	inputFile.close();
}