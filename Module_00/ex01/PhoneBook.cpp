/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:13:01 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/12 17:02:53 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "\t\t\tPHONYY\n\t\t enjoy your huge space" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "exit" << std::endl;
	return;
}

std::string	str_resizing(std::string str)
{
	std::string	ret = str;
	if (str.size() > 10)
	{
		ret = str.substr(0, 10);
		ret[9] = '.';
	}
	return (ret);
}

void	PhoneBook::ShowAllContacts(int ContactNbr)
{
	int	i = 0;
	
	std::cout << std::endl << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first name";
	std::cout << "|" << std::setw(10) << "last name";
	std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	while (i < ContactNbr)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetFirstName());
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetLastName());
		std::cout << "|" << std::setw(10) << str_resizing(this->_book[i].GetNickname()) << "|" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	PhoneBook::ShowContact(int index) const
{
	std::cout << "Phone number : " << this->_book[index].GetPhoneNumber() << std::endl;
	std::cout << "First name : " << this->_book[index].GetFirstName() << std::endl;
	std::cout << "Last name : " << this->_book[index].GetLastName() << std::endl;
	std::cout << "Nickname : " << this->_book[index].GetNickname() << std::endl;
	std::cout << "Darkest Secret : " << this->_book[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::AddContact(Contact *cont)
{
	cont->SetPhoneNumber();
	cont->SetFirstName();
	cont->SetLastName();
	cont->SetNickname();
	cont->SetDarkestSecret();
	std::cout << "New contact " << cont->GetFirstName() << " added to the phonebook."
				<< std::endl;
}

void	PhoneBook::SearchContact(void)
{
	long		i = 0;
	std::string	cmd;

	std::cout << "enter endix: ";
	std::getline(std::cin, cmd);
	if (std::cin.eof())
		exit(0);
	i = std::strtol(cmd.data(), NULL, 10);
	if (!(i >= 1 && i <= 8))
		std::cout << "Wrong index number sent. Please enter a correct index number."
				<< std::endl;
	else
		this->ShowContact(i - 1);
}
