/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:28:36 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 17:31:34 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dolly.hpp"

int	main(int argc, char **argv){

	if (argc == 4){
		Dolly dolly(argv[1]);
		dolly.replace(argv[2], argv[3]);

		std::string cpyName = argv[1];
		cpyName += ".replace";
		
		std::ifstream cpy(cpyName);
		
		if (cpy.is_open()){
			
			std::string cpyContent;

			std::getline(cpy, cpyContent, '\0');

			std::size_t target = cpyContent.find(argv[2]);
			std::size_t replace = cpyContent.find(argv[3]);
			
			if (target == std::string::npos && replace != std::string::npos){
				std::cout << "Congrats, your program works well!" << std::endl;
			}
			else
				std::cout << "It is not the expected result! Try again please!" << std::endl;
			cpy.close();
		}
	}
	else
		std::cout << "Usage: ./files <filename> <target> <replace> " << std::endl;

	return 0;
	
}