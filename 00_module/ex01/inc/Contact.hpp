/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <ansilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:44:29 by anastacia         #+#    #+#             */
/*   Updated: 2023/01/05 18:05:37 by ansilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact{
	
private:
	char	*firstName;
	char	*lastName;
	char	*nickName;
	char	*phoneNumber;
	char	*secret;

public:
	Contact (void);
	Contact (char *firstName, char *lastName, char *nickName, char *phoneNumber, char *secret);
	~Contact ( void );

};

#endif