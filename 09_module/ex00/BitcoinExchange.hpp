
#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

#include <iostream>
#include <string>
#include <map>
#include <fstream>


class BitcoinExchange {

	private:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);

		static std::map<std::string, double> getData(const char * file, const char * sep);
	
	public:
		static void getValues(char * file);

};

#endif