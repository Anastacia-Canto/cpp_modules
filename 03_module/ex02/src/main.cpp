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

int	main( void ) {
	
	FragTrap fifi = FragTrap("Fifi");
	
	fifi.printStatus();

	fifi.takeDamage(10);
	fifi.printStatus();

	fifi.attack("Bubu");
	fifi.printStatus();

	fifi.beRepaired(10);
	fifi.printStatus();

	fifi.highFiveGuys();
	fifi.printStatus();

	return 0;
}