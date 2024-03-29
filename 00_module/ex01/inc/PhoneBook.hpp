/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:48:54 by anastacia         #+#    #+#             */
/*   Updated: 2023/03/07 10:09:40 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include <iostream>
#include <string>
#include <iomanip>
#include "../inc/Contact.hpp"

class PhoneBook{

private:
	Contact 		_contacts[8];
	int				_index;
	std::string		_formatString ( std::string str );
	void			_printOnSearch ( int index );

public:

	PhoneBook( void ); //constructor
	~PhoneBook( void ); //destructor

	void	addContact ( void );
	void	searchContact ( void);
};

#endif