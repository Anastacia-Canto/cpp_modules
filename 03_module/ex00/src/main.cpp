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

int	main( void ) {
	ClapTrap kiki = ClapTrap("Kiki");

	kiki.printStatus();
	
	kiki.takeDamage(2);
	kiki.printStatus();
	kiki.attack("Bubu");
	kiki.printStatus();
	kiki.beRepaired(10);
	kiki.printStatus();
	
	return 0;
}