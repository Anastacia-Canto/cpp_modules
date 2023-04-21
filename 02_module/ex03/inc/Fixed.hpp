/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:05:05 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/21 18:01:37 by anastacia        ###   ########.fr       */
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

	Fixed ( void );
	Fixed ( const int intNum );
	Fixed ( const float floatNum );
	Fixed (const Fixed &src);
	~Fixed ( void );

	Fixed & operator=(Fixed const & rhs);
	
	Fixed & operator++( void ); // prefix increment
	Fixed operator++(int); // postfix increment
	Fixed & operator--( void ); // prefix decrement
	Fixed operator--( int ); // postfix decrement

	Fixed operator+( Fixed const & rhs ) const;
	Fixed operator-(Fixed const & rhs ) const;
	Fixed operator*(Fixed const & rhs ) const;
	Fixed operator/(Fixed const & rhs ) const;

	bool operator<( Fixed const & rhs );
	bool operator>( Fixed const & rhs );
	bool operator<=( Fixed const & rhs );
	bool operator>=( Fixed const & rhs );
	bool operator==( Fixed const & rhs );
	bool operator!=( Fixed const & rhs );

	static Fixed & min( Fixed & num1, Fixed & num2 );
	static const Fixed & min( Fixed const & num1, Fixed const & num2 );
	static Fixed & max( Fixed & num1, Fixed & num2 );
	static const Fixed & max( Fixed const & num1, Fixed const & num2 );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt ( void ) const;

};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif