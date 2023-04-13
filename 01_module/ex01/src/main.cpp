/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:31:39 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/13 09:53:23 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(){
	
	int N = 3;
	
	Zombie* horde = zombieHorde(N, "Toto");
	
	if (!horde)
		return 0;
	for (int i = 0; i < N; i++){
		horde[i].announce();
	}

	delete [] horde;
	
	return 0;
}