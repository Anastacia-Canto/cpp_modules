/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:12:50 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/09 14:47:26 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl( void ){}
Harl::~Harl( void ){}

void	Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
}

void	Harl::warning( void ){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."  << std::endl;
}

void	Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}


void	Harl::complain( std::string level){
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		index = 0;
	
	while (index < 4){
		if (!level.compare(names[index])){
			break ;
		}
		index++;
	}
	if (index < 4)
		std::cout << "[ " << names[index] << " ]" << std::endl;
	switch (index){
		case 0 :
			this->debug();
		case 1 :
			this->info();
		case 2 :
			this->warning();
		case 3 :
			this->error();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}	
}