/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:31 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/06 18:22:32 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "../inc/PhoneBook.hpp"

int	main(){
	PhoneBook	pBook;

	std::string	command;
	do {
		std::cout << "Do you wanna ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;

		for (int i = 0; i < command.length(); i++){
			if (islower(command[i]))
				command[i] = toupper(command[i]);
		}
		if (command.compare("ADD") == 0)
			pBook.addContact();
		else if (command.compare("SEARCH") == 0)
			pBook.searchContact();
		else if (command.compare("EXIT") == 0)
			std::cout << "Goodbye" << std::endl;
		else
			std::cout << "Invalid command. Type ADD, SEARCH or EXIT." << std::endl;
	} while (command.compare("EXIT") != 0);
		
	pBook.exitProg();
	return 0;
}