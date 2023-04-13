/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:05:05 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/13 11:24:53 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>
#include <cmath>

class	Fixed{

private:

	int	_fixed;
	static const int _fractional = 8;


public:

	Fixed ( void );
	Fixed ( const int intNum );
	Fixed ( const float floatNum );
	Fixed (const Fixed &src);
	~Fixed ( void );
	Fixed & operator=(Fixed const & rhs);

	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	// float	toFloat( void ) const;
	int		toInt ( void ) const;

};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif