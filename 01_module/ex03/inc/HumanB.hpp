/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:47:17 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 11:06:58 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

#include "../inc/Weapon.hpp"
#include <iostream>

class HumanB{

	private:
		std::string _name;
		Weapon*		_weapon;


	public:
		HumanB( std::string name );
		~HumanB( void );
		void	setWeapon( Weapon& weapon );
		void	attack( void );

};


#endif