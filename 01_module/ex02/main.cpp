/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 08:54:00 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/08 09:14:57 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str address: " << &str << " str value: " << str << std::endl;
	std::cout << "stringPTR address: " << &stringPTR << " stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << " stringREF value: " << stringREF << std::endl;
	
}