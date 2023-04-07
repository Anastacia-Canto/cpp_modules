/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:09:07 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/10 18:12:15 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
# define _HARL_HPP_

#include <string>
#include <iostream>

class Harl{

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		Harl( void );
		~Harl( void );
		void	complain( std::string level);


};


#endif