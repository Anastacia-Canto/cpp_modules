/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:54:25 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/21 18:02:19 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int	main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed ( 2 ));
	Fixed c;
	Fixed d( 2.5f );
	Fixed e( 3 );
	Fixed f = e;
	
	std::cout << "Increment operators" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "Decrement operators" << std::endl;
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;

	std::cout << "Arithmetic operators" << std::endl;
	std::cout << d + e << std::endl;
	std::cout << d - e << std::endl;
	std::cout << d * e << std::endl;
	std::cout << d / e << std::endl;

	std::cout << "Comparison operators" << std::endl;
	std::cout <<  d << " < " << e << " ? " << (d < e ? "True" : "False") << std::endl;
	std::cout <<  d << " > " << e << " ? " << (d > e ? "True" : "False") << std::endl;
	std::cout <<  f << " >= " << d << " ? " << (f >= d ? "True" : "False") << std::endl;
	std::cout <<  f << " == " << c << " ? " << (f == c ? "True" : "False") << std::endl;
	std::cout <<  f << " != " << c << " ? " << (f != c ? "True" : "False") << std::endl;

	std::cout << "Min and max" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}