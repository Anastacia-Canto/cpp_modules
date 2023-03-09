/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 09:18:42 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 11:36:54 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <string>
#include <iostream>

class Weapon{
	
	private:
		std::string _type;
	
	public:
		Weapon ( std::string type );
		~Weapon ( void );
		const std::string& getType( void );
		void setType( std::string type );
};


#endif