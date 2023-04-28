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

DiamondTrap::DiamondTrap( std::string name ) : name(name) {
    ClapTrap::name = name.append("_clap_name");
    this->hitPts = FragTrap::hitPts;
    this->energyPts = ScavTrap::energyPts;
    this->attackDmg = FragTrap::attackDmg;
    std::cout << "DiamondTrap " << this->name << " was created." << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap " << this->name << " was destroyed." << std::endl;
}

void DiamondTrap::whoAmI( void ) {
    if (this->hitPts <= 0 || this->energyPts <= 0) {
		std::cout << this->name << " has no hit or energy points." << std::endl;
		return ;
	}
    std::cout << "DiamondTrap name is " << this->name
    << " and its ClapTrap name is " << ClapTrap::name << std::endl;
}