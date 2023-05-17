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

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include "../inc/ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

    public:
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );
        ~FragTrap( void );
        FragTrap & operator=( FragTrap const & rhs );
        
        void highFiveGuys( void );
        void attack(const std::string& target);

};


#endif