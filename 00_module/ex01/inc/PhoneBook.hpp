/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:48:54 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/06 17:57:29 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

#include <iostream>
#include "../inc/Contact.hpp"

class PhoneBook{

private:
	Contact mContacts[8];
	int		mIndex;

public:

	PhoneBook( void ); //constructor
	~PhoneBook( void ); //destructor

	void	addContact ( void );
	void	searchContact ( void );
	void	exitProg ( void );
};

#endif