/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:00:04 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 09:21:32 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::setFirstName ( std::string name ) {
	this->_firstName = name;
}

void	Contact::setLastName ( std::string surname ){
	this->_lastName = surname;
}

void	Contact::setNickname ( std::string nickname ){
	this->_nickname = nickname;
}
void	Contact::setPhoneNumber ( std::string number ){
	this->_phoneNumber = number;
}
void	Contact::setSecret ( std::string secret ){
	this->_secret = secret;
}


std::string	Contact::getFirstName ( void ) {
	return this->_firstName;
}

std::string	Contact::getLastName ( void ){
	return this->_lastName;
}

std::string	Contact::getNickname ( void ){
	return this->_nickname;
}
std::string	Contact::getPhoneNumber ( void ){
	return this->_phoneNumber;
}
std::string	Contact::getSecret ( void ){
	return this->_secret;
}

void	Contact::printContact ( void ){
	std::cout << "First name: " << this->getFirstName() << std::endl;
	std::cout << "Last name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->getSecret() << std::endl;
}

