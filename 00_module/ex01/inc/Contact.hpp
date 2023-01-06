/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anastacia <anastacia@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:44:29 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/06 10:38:55 by anastacia        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact{
	
private:
	std::string	mFirstName;
	std::string	mLastName;
	std::string	mNickname;
	std::string	mPhoneNumber;
	std::string	mSecret;

public:
	Contact ( void );
	~Contact ( void );

	void	setFirstName ( std::string name );
	void	setLastName ( std::string surname );
	void	setNickname ( std::string nickname );
	void	setPhoneNumber ( std::string number );
	void	setSecret ( std::string secret );

	std::string	getFirstName ( void );
	std::string	getLastName ( void );
	std::string	getNickname ( void );
	std::string	getPhoneNumber ( void );
	std::string	getSecret ( void );	

};

#endif