/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:12:50 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/13 10:53:27 by ansilva-         ###   ########.fr       */
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


Harl::ptr Harl::func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};


void	Harl::complain( std::string level){
	std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	ptr	p;
	for (int i = 0; i < 4; i++){
		if (!level.compare(names[i])){
			p = this->func[i];
			(this->*p)();
			return ;
		}
	}
}