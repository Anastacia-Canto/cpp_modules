/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:36:10 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/09 14:44:47 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

std::string	megaphone(char *word) {
	
	char	ch;
	std::string	str;

	for (unsigned int i = 0; i < strlen(word); i++){
		if (word[i] != ' '){
			ch = (char) toupper(word[i]);
			str.insert(str.end(), ch);
		}
	}
	return str;
}

int main(int argc, char **argv){

	Harl	harl;
	
	if (argc == 2)
	{
		std::string	input = megaphone(argv[1]);
		harl.complain(input);
	} else {
		std::cout << "Usage ./harlFilter <your input>" << std::endl;
	}
	return 0;
}