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
	DiamondTrap didi = DiamondTrap("Didi");
	
	didi.printStatus();

	didi.takeDamage(10);
	didi.printStatus();

	didi.attack("Bubu");
	didi.printStatus();

	didi.beRepaired(10);
	didi.printStatus();
	
	didi.whoAmI();

	return 0;
}