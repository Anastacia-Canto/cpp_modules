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

int	main( void ) {
	
	ScavTrap caca = ScavTrap("Caca");
	
	caca.printStatus();

	caca.takeDamage(10);
	caca.printStatus();

	caca.attack("Bubu");
	caca.printStatus();

	caca.beRepaired(10);
	caca.printStatus();

	caca.guardGate();
	caca.printStatus();
	
	return 0;
}