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

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : name("default"), ClapTrap("default_clap_name"), FragTrap(), ScavTrap() {
    this->hitPts = FragTrap::hitPtsDef;
    this->energyPts = ScavTrap::energyPtsDef;
    this->attackDmg = FragTrap::attackDmgDef;
    std::cout << "DiamondTrap " << this->name << " was created." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : name(name), ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    this->hitPts = FragTrap::hitPtsDef;
    this->energyPts = ScavTrap::energyPtsDef;
    this->attackDmg = FragTrap::attackDmgDef;
    std::cout << "DiamondTrap " << this->name << " was created." << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << this->name << " was destroyed." << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) {
    *this = src;
    std::cout << "DiamondTrap " << this->name << " has been copied." << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs ) {
    ClapTrap::name = rhs.getName().append("_clap_name");
    this->hitPts = FragTrap::hitPts;
    this->energyPts = ScavTrap::energyPts;
    this->attackDmg = FragTrap::attackDmg;
    return *this;
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap name is " << this->name
    << " and its ClapTrap name is " << ClapTrap::name << std::endl;
}