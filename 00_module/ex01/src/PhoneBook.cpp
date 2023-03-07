/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:01:27 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 09:10:12 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook ( void ){
}

PhoneBook::~PhoneBook( void ){}

void	PhoneBook::addContact ( void ){
	static int	index;
	
	std::cout << "First name: ";
	std::string name;
	std::cin >> name;
	this->mContacts[index % 8].setFirstName(name);
	std::cout << "Last name: ";
	std::string surname;
	std::cin >> surname;
	this->mContacts[index % 8].setLastName(surname);
	std::cout << "Nickname: ";
	std::string nickname;
	std::cin >> nickname;
	this->mContacts[index % 8].setNickname(nickname);
	std::cout << "Phone number: ";
	std::string number;
	std::cin >> number;
	this->mContacts[index % 8].setPhoneNumber(number);
	std::cout << "Darkest secret: ";
	std::string secret;
	std::cin >> secret;
	this->mContacts[index % 8].setSecret(secret);
	this->mIndex = index;
	index++;
	return ;
}

void	PhoneBook::searchContact ( void ){
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
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
		if (index >= mIndex){ //pensar sobre depois de já ter 8 contatos
			std::cout << "Empty index" << std::endl;
			return ;
		}
		mContacts[index].printContact();
	}
	else{
		std::cout << "Invalid index. It should be a number between 1 and 8." << std::endl;
		return ;
	}
}
