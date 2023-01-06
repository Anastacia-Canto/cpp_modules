/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:01:27 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/06 18:26:34 by anastacia        ###   ########.fr       */
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
	mIndex++;
	return ;
}

void	PhoneBook::searchContact ( void ){

}

void	PhoneBook::exitProg ( void ){

}