/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:22:06 by anastacia         #+#    #+#             */
/*   Updated: 2023/04/21 18:55:16 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

# include "Fixed.hpp"

class Point {
	
	private:
		Fixed const _x;
		Fixed const _y;

	public:

		Point( void );
		Point( const float x, const float y );
		Point( const Point& src );
		~Point( void );

		Point & operator=( Point const & rhs );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
		
		bool bsp( Point const a, Point const b, Point const c, Point const point );
	
};


#endif;