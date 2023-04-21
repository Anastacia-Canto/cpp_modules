/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:22:08 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/21 18:48:36 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point( void ) : _x(0),_y(0) {
	std::cout << "Default constructor called." << std::endl;
}

Point::Point( const float x, const float y ) : _x(x),_y(y){}

Point::~Point ( void ) {
	std::cout << "Destructor called." << std::endl;
}

Point::Point( const Point& src ) {
	*this = src;
}

Point & Point::operator=( Point const & rhs) {
	( Fixed )this->_x = rhs.getX();
	( Fixed )this->_y = rhs.getY();
	return *this;
}

Fixed Point::getX( void ) const {
	return this->_x;
}

Fixed Point::getY( void ) const {
	return this->_y;
}