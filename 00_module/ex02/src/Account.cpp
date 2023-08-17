// ************************************************************************** //
//                                                                            //
//                Account.cpp for GlobalBanksters United                      //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include "../inc/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( int initial_deposit ):_amount(initial_deposit){
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";created" << std::endl;
}
Account::~Account( void ){
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void ){
	std::time_t now = std::time(NULL);
	std::cout << "[" << 1900 + (std::localtime(&now))->tm_year
	<< std::setfill ('0') << std::setw(2) << 1 + (std::localtime(&now))->tm_mon
	<< std::setfill ('0') << std::setw(2) << (std::localtime(&now))->tm_mday
	<< "_" << (std::localtime(&now))->tm_hour
	<< (std::localtime(&now))->tm_min
	<< (std::localtime(&now))->tm_sec
	<< "]" << std::flush;
}

int	Account::getNbAccounts( void ){ return _nbAccounts; }
int	Account::getTotalAmount( void ){ return _totalAmount; }
int	Account::getNbDeposits( void ){ return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ){ return _totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount() 
	<< ";deposits:" << getNbDeposits() 
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->_amount 
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit( int deposit ){
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount - deposit 
	<< ";deposit:" << deposit
	<< ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}
int		Account::checkAmount( void ) const{ return this->_amount; }

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->_amount;
	if (checkAmount() > withdrawal){
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals
		<< std::endl;
		return true;
	} else {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}