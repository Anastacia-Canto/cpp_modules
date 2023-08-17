/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:24:52 by anastacia         #+#    #+#             */
/*   Updated: 2022/12/09 16:17:53 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char **argv) {
	char	ch;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int j = 1; j < argc; j++){
		for (unsigned int i = 0; i < strlen(argv[j]); i++){
			ch = (char) toupper(argv[j][i]);
			std::cout << ch;
		}
	}
	std::cout << std::endl;
	return 0;
}