/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:12:58 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/12 02:18:38 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
private:
public:
	PhoneBook(void);
	~PhoneBook();

	Contact	_book[8];
	void	ShowAllContacts(int ContactNbr);
	void	ShowContact(int index) const;
	void	AddContact(Contact *cont);
	void	SearchContact(void);

};

#endif