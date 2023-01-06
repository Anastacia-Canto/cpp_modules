/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:00:04 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/06 10:38:23 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::setFirstName ( std::string name ) {
	this->mFirstName = name;
}

void	Contact::setLastName ( std::string surname ){
	this->mLastName = surname;
}

void	Contact::setNickname ( std::string nickname ){
	this->mNickname = nickname;
}
void	Contact::setPhoneNumber ( std::string number ){
	this->mPhoneNumber = number;
}
void	Contact::setSecret ( std::string secret ){
	this->mSecret = secret;
}


std::string	Contact::getFirstName ( void ) {
	return this->mFirstName;
}

std::string	Contact::getLastName ( void ){
	return this->mLastName;
}

std::string	Contact::getNickname ( void ){
	return this->mNickname;
}
std::string	Contact::getPhoneNumber ( void ){
	return this->mPhoneNumber;
}
std::string	Contact::getSecret ( void ){
	return this->mSecret;
}