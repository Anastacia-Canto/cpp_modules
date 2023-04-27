/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:26:46 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/25 08:29:25 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int	main( void ) {
	// ClapTrap kiki = ClapTrap("Kiki");
	// ScavTrap caca = ScavTrap("Caca");
	// FragTrap fifi = FragTrap("Fifi");
	DiamondTrap didi = DiamondTrap("Didi");
	
	// kiki.takeDamage(10);
	// kiki.attack("Bubu");
	// kiki.beRepaired(10);
	// caca.takeDamage(10);
	// caca.attack("Bubu");
	// caca.beRepaired(10);
	// caca.guardGate();
	// fifi.takeDamage(10);
	// fifi.attack("Bubu");
	// fifi.beRepaired(10);
	// fifi.highFiveGuys();
	didi.takeDamage(10);
	didi.attack("Bubu");
	didi.beRepaired(10);
	didi.whoAmI();

	
	return 0;
}