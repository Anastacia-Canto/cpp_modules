/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:34:14 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/21 12:44:40 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed ( const int intNum ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = intNum << this->_fractional;
}

Fixed::Fixed ( const float floatNum ) : _fixed(std::roundf(floatNum * (1 << this->_fractional))
){
	std::cout << "Float constructor called" << std::endl;
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
	out << rhs.toFloat();
	return out;
}

int		Fixed::getRawBits( void ) const{
	return this->_fixed;
}
void	Fixed::setRawBits( int const raw ){
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const{
	return getRawBits() / float(1 << this->_fractional);
}

int		Fixed::toInt ( void ) const{
	return getRawBits() >> this->_fractional;
}
