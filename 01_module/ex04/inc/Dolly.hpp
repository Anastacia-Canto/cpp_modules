/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dolly.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:13:56 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/09 17:04:19 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOLLY_HPP_
# define _DOLLY_HPP_

#include <iostream>
#include <fstream>
#include <string>

class Dolly{

	private:
		std::string	_source;
		std::string	_mycopy;

	public:
		Dolly( std::string filename );
		~Dolly( void );
		void	replace( std::string oldStr, std::string newStr );
		
};



#endif