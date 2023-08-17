/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:31 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 17:39:40 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(){
	PhoneBook	pBook;

	std::cout << "Welcome to your awesome PhoneBook!" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	
	std::string	command;
	do {
		std::cout << "Do you wanna ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;

		for (unsigned int i = 0; i < command.length(); i++){
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
		
	return 0;
}