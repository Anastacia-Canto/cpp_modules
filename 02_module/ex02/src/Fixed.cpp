/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:34:14 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/21 18:02:02 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/*---------------------------------Constructors and Destructor----------------------------------*/
Fixed::Fixed( void ) {
	// std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed ( const int intNum ) {
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed = intNum << this->_fractional;
}

Fixed::Fixed ( const float floatNum ) : _fixed(roundf(floatNum * (1 << this->_fractional))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed &src) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*-----------------------------------Operators overload--------------------------------------------*/

Fixed & Fixed::operator=(Fixed const & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs) {
	out << rhs.toFloat();
	return out;
}

/*----------------------------Increments and decrements -------------------------------------------*/

/* Prefix increment returns the value of a variable AFTER it has been incremented. */
/* Postfix increment returns the value of a variable BEFORE it has been incremented. */
	
Fixed & Fixed::operator++( void ) {
	++this->_fixed;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed old;
	old._fixed = this->_fixed;
	this->_fixed++;
	return old;
}

Fixed & Fixed::operator--( void ) {
	--this->_fixed;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed old;
	old._fixed = this->_fixed;
	this->_fixed--;
	return old;
}

/*-----------------------------------Arithmetics Operators -------------------------------------*/

Fixed Fixed::operator+( Fixed const & rhs ) const {
	return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator-( Fixed const & rhs ) const {
	return this->toFloat() - rhs.toFloat();
}

Fixed  Fixed::operator*( Fixed const & rhs ) const {
	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/( Fixed const & rhs ) const {
	return this->toFloat() / rhs.toFloat();
}

/*----------------------------------Comparison Operators -----------------------------------------*/

bool Fixed::operator<( Fixed const & rhs ) {
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>( Fixed const & rhs ) {
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<=( Fixed const & rhs ) {
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator>=( Fixed const & rhs ) {
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator==( Fixed const & rhs ) {
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=( Fixed const & rhs ) {
	return this->getRawBits() != rhs.getRawBits();
}

/*------------------------------------Member Functions---------------------------------------------*/

int		Fixed::getRawBits( void ) const {
	return this->_fixed;
}
void	Fixed::setRawBits( int const raw ) {
	this->_fixed = raw;
}

float	Fixed::toFloat( void ) const {
	return getRawBits() / float(1 << this->_fractional);
}

int		Fixed::toInt ( void ) const {
	return getRawBits() >> this->_fractional;
}

/*----------------------------------------Min and Max ---------------------------------------------*/

Fixed & Fixed::min( Fixed & num1, Fixed & num2 ) {
	return num1 < num2 ? num1 : num2;
}

const Fixed & Fixed::min( Fixed const & num1, Fixed const & num2 ) {
	return (num1.getRawBits() < num2.getRawBits() ? num1 : num2);
}

Fixed & Fixed::max( Fixed & num1, Fixed & num2 ) {
	return num1 > num2 ? num1 : num2;
}

const Fixed & Fixed::max( Fixed const & num1, Fixed const & num2 ) {
	return (num1.getRawBits() > num2.getRawBits() ? num1 : num2);
}