/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:13:41 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/15 13:03:43 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int		main(void)
{
	std::string	cmd;
	PhoneBook	book;
	int			index = 0;

	while (1)
	{
		std::cout<<"< ";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT")
			exit(0);
		else if (cmd == "ADD")
		{
			book.AddContact(&book._book[(index % 8)]);
			index++;
		}
		else if (cmd == "SEARCH")
		{
			if (index >= 8)
				book.ShowAllContacts(8);
			else
				book.ShowAllContacts(index);
			book.SearchContact();
		}
		else
		{
			std::cout<<"PhonBook: "<<cmd<<": command not found"<<std::endl;
		}
	}
}
