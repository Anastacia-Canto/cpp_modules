
#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

#include <iostream>
#include <string>
#include <map>
#include <fstream>


class BitcoinExchange {

	private:
		std::map<char, double> prices;
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		BitcoinExchange & operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);
	
	public:
		static void getValues(std::ofstream& file);

};

#endif