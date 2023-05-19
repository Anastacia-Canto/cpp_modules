/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:55:52 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/25 08:26:27 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include <iostream>
#include <string>
#include "../inc/ClapTrap.hpp"

class ScavTrap: public ClapTrap {

    public:
        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src );
        ~ScavTrap( void );
        ScavTrap & operator=( ScavTrap const & rhs );

        void guardGate( void );
        void attack( const std::string& target );
};

#endif