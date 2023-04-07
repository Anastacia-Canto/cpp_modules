/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 18:36:10 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/07 18:52:55 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void){

	Harl	harl;
	
	std::cout << "Hello Harl, what's up?" << std::endl;
	std::cout << "DEBUG: ";
	harl.complain("debug");
	std::cout << "That's ok bro, it is only 1 dollar." << std::endl;
	std::cout << "INFO: ";
	harl.complain("info");
	std::cout << "Hey man, I think you are nervous, are you?" << std::endl;
	std::cout << "WARNING: ";
	harl.complain("warning");
	std::cout << "I know you love the place, but it's superior orders." << std::endl;
	std::cout << "ERROR: ";
	harl.complain("error");
	harl.complain("what");
	return 0;
}