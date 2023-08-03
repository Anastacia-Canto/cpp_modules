
#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <algorithm>


class BitcoinExchange {

	private:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);

		static std::map<std::string, double> getData(const char * file, const char * sep);
		static bool isValidFormat(std::string line);
		static bool isValidValue(std::string line);
	
	public:
		static void getValues(char * file);

};

#endif