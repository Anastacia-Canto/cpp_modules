/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:40:39 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 11:58:42 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon ( std::string type ) :_type(type){}

Weapon::~Weapon ( void ){}

const std::string& Weapon::getType( void ){
	return this->_type;
}

void Weapon::setType( std::string type ){
	this->_type = type;
}