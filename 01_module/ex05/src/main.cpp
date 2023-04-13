/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:36:10 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/13 10:53:57 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void){

	Harl	harl;
	std::string	level;
	
	do {
		std::cout << "Select a Harl level ('DEBUG', 'INFO', 'WARNING', 'ERROR') or 'EXIT' to close the program." << std::endl;
		std::cin >> level;
		harl.complain(level);
	} while (level.compare("EXIT"));
	return 0;
}