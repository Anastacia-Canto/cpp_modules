/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:04:06 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/08 08:46:02 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie{
	
private:
	std::string	_name;
	
public:
	Zombie( void );
	~Zombie( void );
	void	announce ( void );
	void	setName (std::string name );
	Zombie*	zombieHorde( int N, std::string name);

};

Zombie*	zombieHorde( int N, std::string name);

#endif