/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:55:52 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/25 08:26:27 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    this->hitPts = 100;
    this->energyPts = 50;
    this->attackDmg = 20;
    std::cout << "ScavTrap " << this->name << " was created." << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap " << this->name << " was destroyed." << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
	this->energyPts--;
	std::cout << "ScavTrap " << this->name << " attacks " <<
	target << " causing " << this->attackDmg << " points of damage!"<< std::endl;
}

void ScavTrap::guardGate( void ) {
    if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
    std::cout << "Scavtrap " << this->name << " is now in Gate keeper mode." << std::endl;
}