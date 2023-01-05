/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:01:27 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/05 12:18:11 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook ( void ){
	std::cout << "Constructor" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ){
	std::cout << "Destructor" << std::endl;
	return ;
}