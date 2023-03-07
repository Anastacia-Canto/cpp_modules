/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:01:27 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 10:10:05 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook ( void ){
}

PhoneBook::~PhoneBook( void ){}

void	PhoneBook::addContact ( void ){
	static int	index;
	
	std::cout << "First name: ";
	std::string name;
	std::cin >> name;
	this->_contacts[index % 8].setFirstName(name);
	std::cout << "Last name: ";
	std::string surname;
	std::cin >> surname;
	this->_contacts[index % 8].setLastName(surname);
	std::cout << "Nickname: ";
	std::string nickname;
	std::cin >> nickname;
	this->_contacts[index % 8].setNickname(nickname);
	std::cout << "Phone number: ";
	std::string number;
	std::cin >> number;
	this->_contacts[index % 8].setPhoneNumber(number);
	std::cout << "Darkest secret: ";
	std::string secret;
	std::cin >> secret;
	this->_contacts[index % 8].setSecret(secret);
	this->_index = index;
	index++;
	return ;
}

void	PhoneBook::searchContact ( void ){
	for (int i = 0; i < 8; i++){
		this->_printOnSearch(i);
	}
	int	index;
	std::cout << "Enter a contact index between 1 and 8: " << std::endl;
	std::cin >> index;
	while(1)
	{
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cout << "You have entered wrong input" << std::endl;
			std::cout << "Enter a contact index between 1 and 8: " << std::endl;
			std::cin >> index;
		}
		if(!std::cin.fail())
			break;
	}
	if (index >= 1 && index <= 8){
		index--;
		if (this->_contacts[index].getFirstName().empty() ||
			this->_contacts[index].getLastName().empty() ||
			this->_contacts[index].getNickname().empty()){ 
			std::cout << "Empty index" << std::endl;
			return ;
		}
		_contacts[index].printContact();
	}
	else{
		std::cout << "Invalid index. It should be a number between 1 and 8." << std::endl;
		return ;
	}
}

std::string	PhoneBook::_formatString ( std::string str ){
	if (str.length() > 10){
		return str.substr(0, 9) + ".";
	}
	return str;
}

void	PhoneBook::_printOnSearch ( int index ){
	if (this->_contacts[index].getFirstName().empty() ||
		this->_contacts[index].getLastName().empty() ||
		this->_contacts[index].getNickname().empty()){
		return ;
	}
	
	std::cout << "|" <<std::setw(10) << index + 1 << std::flush;
	std::cout << "|" <<std::setw(10) << this->_formatString(this->_contacts[index].getFirstName()) << std::flush;
	std::cout << "|" <<std::setw(10) << this->_formatString(this->_contacts[index].getLastName()) << std::flush;
	std::cout << "|" <<std::setw(10) << this->_formatString(this->_contacts[index].getNickname()) << std::flush;
	std::cout << "|" << std::endl;
}
