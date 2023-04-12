/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:05:05 by ansilva-          #+#    #+#             */
/*   Updated: 2023/04/12 15:53:50 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class	Fixed{

private:

	int	_fixed;
	static const int _fractional = 8;


public:

	Fixed ( void );
	Fixed (const Fixed &src);
	~Fixed ( void );
	Fixed & operator=(Fixed const & rhs);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif