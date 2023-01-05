/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:00:04 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/05 18:29:03 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"

Contact::Contact(void){}

Contact::Contact(char *firstName, char *lastName, char *nickName, char *phoneNumber, char *secret){
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->secret = secret;
}

Contact::~Contact(void){
	delete this;
}


