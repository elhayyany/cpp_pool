/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:13:44 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/12 02:18:27 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>
# include <string>

class Contact
{
private:
	std::string	PhoneNumber;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	darkestSecret;
	
public:
	Contact(void);
	~Contact(void);
	
	void		SetPhoneNumber(void);
	void		SetFirstName(void);
	void		SetLastName(void);
	void		SetNickname(void);
	void		SetDarkestSecret(void);
	std::string	GetPhoneNumber(void) const;
	std::string	GetFirstName(void) const;
	std::string	GetLastName(void) const;
	std::string	GetNickname(void) const;
	std::string	getDarkestSecret(void) const;
};

#endif