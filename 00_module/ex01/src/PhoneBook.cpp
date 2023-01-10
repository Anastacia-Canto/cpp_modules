/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:01:27 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/10 22:02:46 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook ( void ){
	this->mIndex = 0;
}

PhoneBook::~PhoneBook( void ){}

void	PhoneBook::addContact ( void ){
	if (this->mIndex > 7)
		this->mIndex = 0;
	std::cout << "First name: ";
	std::string name;
	std::cin >> name;
	this->mContacts[mIndex].setFirstName(name);
	std::cout << "Last name: ";
	std::string surname;
	std::cin >> surname;
	this->mContacts[mIndex].setLastName(surname);
	std::cout << "Nickname: ";
	std::string nickname;
	std::cin >> nickname;
	this->mContacts[mIndex].setNickname(nickname);
	std::cout << "Phone number: ";
	std::string number;
	std::cin >> number;
	this->mContacts[mIndex].setPhoneNumber(number);
	std::cout << "Darkest secret: ";
	std::string secret;
	std::cin >> secret;
	this->mContacts[mIndex].setSecret(secret);
	this->mIndex++;
	return ;
}

void	PhoneBook::searchContact ( int index ){
	if (index < 0 || index > 7){
		std::cout << "Invalid index. It should be a number between 0 and 7." << std::endl;
		return ;
	}
	mContacts[index].printContact();
}

void	PhoneBook::exitProg ( void ){

}