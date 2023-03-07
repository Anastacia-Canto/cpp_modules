/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:31:39 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 18:52:58 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(){
	
	Zombie* toto = newZombie("Toto");
	
	toto->announce();

	delete toto;

	randomChump("Baba");
	
	return 0;
}