/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:02:24 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/24 12:13:44 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap {
	
	private:
		std::string _name;
		int			_hitPts;
		int			_energyPts;
		int			_atackDmg;
		


	public:
		ClapTrap( void );
		ClapTrap( const ClapTrap &src );
		~ClapTrap( void );
		ClapTrap & operator=( ClapTrap const & rhs );
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
};


#endif