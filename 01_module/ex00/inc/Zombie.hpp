/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:04:06 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 18:53:18 by anastacia        ###   ########.fr       */
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
	Zombie( std::string name);
	~Zombie( void );
	void	announce ( void );
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif