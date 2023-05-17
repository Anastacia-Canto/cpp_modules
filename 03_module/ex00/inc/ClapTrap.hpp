/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:02:24 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/25 08:17:18 by anastacia        ###   ########.fr       */
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
		int			_attackDmg;
		


	public:
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &src );
		~ClapTrap( void );
		ClapTrap & operator=( ClapTrap const & rhs );
		
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

		std::string getName( void ) const;
		int getHitPts( void ) const;
		int getEnergyPts( void ) const;
		int getAttackDmg( void ) const;
		void	printStatus( void );
	
};


#endif