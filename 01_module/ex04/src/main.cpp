/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:28:36 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/13 10:32:07 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dolly.hpp"

void	test_prog( std::string filename, std::string s1, std::string s2){

	std::cout << "Starting the test!" << std::endl;
	
	std::string cpyName = filename;
	cpyName += ".replace";
	
	std::ifstream cpy(cpyName.c_str(), std::ifstream::in);
	
	if (cpy.is_open()){
		
		std::string cpyContent;

		std::getline(cpy, cpyContent, '\0');

		std::size_t targetOnCopy = cpyContent.find(s1);
		std::size_t replaceOnCopy = cpyContent.find(s2);
		
		
		if (targetOnCopy == std::string::npos && replaceOnCopy != std::string::npos){
			std::cout << "Result: Congrats, your program works well!" << std::endl;
		}
		else
			std::cout << "It is not the expected result! Try again please!" << std::endl;
		cpy.close();
	}
}

int	main(int argc, char **argv){

	std::string target = argv[2];
	if (argc == 4 && !target.empty()){
		Dolly dolly(argv[1]);
		dolly.replace(argv[2], argv[3]);

		test_prog(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Usage: ./files <filename> <target> <replace> " << std::endl;

	return 0;
	
}