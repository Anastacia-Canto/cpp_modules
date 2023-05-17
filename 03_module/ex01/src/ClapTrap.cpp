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

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	this->hitPts = 10;
	this->energyPts = 10;
	this->attackDmg = 0;
	std::cout << "ClapTrap default " << name << " was created." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name) {
	this->hitPts = 10;
	this->energyPts = 10;
	this->attackDmg = 0;
	std::cout << "ClapTrap " << name << " was created." << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->name << " was destroyed." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) {
	*this = src;
	std::cout << "ClapTrap " << this->name << " has been copied." << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	this->name = rhs.getName();
	this->hitPts = rhs.getHitPts();
	this->energyPts = rhs.getEnergyPts();
	this->attackDmg = rhs.getAttackDmg();
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
	this->energyPts--;
	std::cout << "ClapTrap " << this->name << " attacks " <<
	target << " causing " << this->attackDmg << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPts >= amount) {
		this->hitPts -= amount;
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " of damage." << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " has no hit points." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPts <= 0 || this->hitPts <= 0) {
		std::cout << "ClapTrap has no energy or hit points." << std::endl;
		return ;
	}
	this->energyPts--;
	this->hitPts += amount;
	std::cout << "ClapTrap " << this->name << " has been repaired." << std::endl;
}



std::string ClapTrap::getName( void ) const {
	return this->name;
}

int ClapTrap::getHitPts( void ) const {
	return this->hitPts;
}

int ClapTrap::getEnergyPts( void ) const {
	return this->energyPts;
}

int ClapTrap::getAttackDmg( void ) const {
	return this->attackDmg;
}

void	ClapTrap::printStatus( void ) {
	std::cout << "My name is " << this->name
	<< " - Hit Points: " << this->hitPts
	<< " - Energy Points: " << this->energyPts
	<< " - Attack Damage: " << this->attackDmg << std::endl;
}