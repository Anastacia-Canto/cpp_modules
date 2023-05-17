/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:02:24 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/25 08:17:18 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"


FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    this->hitPts = 100;
    this->energyPts = 100;
    this->attackDmg = 30;
    std::cout << "FragTrap " << this->name << " was created." << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << this->name << " was destroyed." << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) {
	*this = src;
	std::cout << "FragTrap " << this->name << " has been copied." << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	ClapTrap::name = rhs.getName();
	this->hitPts = rhs.getHitPts();
    this->energyPts = rhs.getEnergyPts();
    this->attackDmg = rhs.getAttackDmg();
	return *this;
}

void FragTrap::attack( const std::string& target ) {
	if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
	this->energyPts--;
	std::cout << "FragTrap " << this->name << " attacks " <<
	target << " causing " << this->attackDmg << " points of damage!"<< std::endl;
}

void FragTrap::highFiveGuys( void ) {
    if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
    std::cout << "FragTrap " << this->name << " high fives everyone." << std::endl;
}