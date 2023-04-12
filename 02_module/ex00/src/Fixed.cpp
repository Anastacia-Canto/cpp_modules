/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:34:14 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/12 15:58:13 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs){
	out << rhs.getRawBits();
	return out;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}
void	Fixed::setRawBits( int const raw ){
	this->_fixed = raw;
}