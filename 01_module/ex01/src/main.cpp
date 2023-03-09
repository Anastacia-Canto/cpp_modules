/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:31:39 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/08 08:51:04 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(){
	
	int N = 3;
	
	Zombie* horde = zombieHorde(N, "Toto");
	
	for (int i = 0; i < N; i++){
		horde[i].announce();
	}

	delete [] horde;
	
	return 0;
}