/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:47:10 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 12:06:06 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) :_name(name), _weapon(weapon){}

HumanA::~HumanA( void ){}

void	HumanA::attack( void ){
	if (this->_weapon.getType() != "")
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}