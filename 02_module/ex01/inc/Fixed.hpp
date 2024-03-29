/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:05:05 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/21 15:26:21 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>
#include <cmath>
#include <string>

class	Fixed{

private:

	int	_fixed;
	static const int _fractional = 8;


public:

	/*--------------------Constructors and Destructor--------------------*/
	Fixed ( void );
	Fixed ( const int intNum );
	Fixed ( const float floatNum );
	Fixed (const Fixed &src);
	~Fixed ( void );

	/*---------------------Operators overload----------------------------*/
	Fixed & operator=(Fixed const & rhs);

	/*---------------------------Member Functions------------------------*/
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt ( void ) const;

};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif