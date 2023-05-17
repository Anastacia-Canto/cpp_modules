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

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	this->_hitPts = 10;
	this->_energyPts = 10;
	this->_attackDmg = 0;
	std::cout << "ClapTrap " << name << " was created." << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << this->_name << " was destroyed." << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) {
	*this = src;
	std::cout << "ClapTrap " << this->_name << " has been copied." << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	this->_name = rhs.getName();
	this->_hitPts = rhs.getHitPts();
	this->_energyPts = rhs.getEnergyPts();
	this->_attackDmg = rhs.getAttackDmg();
	return *this;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->_hitPts <= 0 || this->_energyPts <= 0) {
		std::cout << this->_name << " has no hit or energy points." << std::endl;
		return ;
	}
	this->_energyPts--;
	std::cout << "ClapTrap " << this->_name << " attacks " <<
	target << " causing " << this->_attackDmg << " points of damage!"<< std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPts >= amount) {
		this->_hitPts -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " of damage." << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " has no hit points." << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPts <= 0 || this->_hitPts <= 0) {
		std::cout << "ClapTrap has no energy or hit points." << std::endl;
		return ;
	}
	this->_energyPts--;
	this->_hitPts += amount;
	std::cout << "ClapTrap " << this->_name << " has been repaired." << std::endl;
}



std::string ClapTrap::getName( void ) const {
	return this->_name;
}

int ClapTrap::getHitPts( void ) const {
	return this->_hitPts;
}

int ClapTrap::getEnergyPts( void ) const {
	return this->_energyPts;
}

int ClapTrap::getAttackDmg( void ) const {
	return this->_attackDmg;
}

void	ClapTrap::printStatus( void ) {
	std::cout << "My name is " << this->_name
	<< " - Hit Points: " << this->_hitPts
	<< " - Energy Points: " << this->_energyPts
	<< " - Attack Damage: " << this->_attackDmg << std::endl;
}