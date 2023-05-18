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

#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap  {

    private:
        std::string name;

    public:
        DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const & src );
        ~DiamondTrap( void );
        DiamondTrap & operator=( DiamondTrap const & rhs );
        
        using ScavTrap::attack;
        void whoAmI( void );
};

#endif