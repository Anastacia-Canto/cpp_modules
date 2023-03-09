/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:47:19 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 11:43:16 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

#include "../inc/Weapon.hpp"
#include <iostream>

class HumanA{

	private:
		std::string _name;
		Weapon&		_weapon;
		
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );

};


#endif