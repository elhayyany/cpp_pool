/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:13:47 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/15 13:06:10 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
}

void	Contact::SetPhoneNumber(void)
{
	std::cout << "enter phone number : ";
	std::getline(std::cin, PhoneNumber);
	if (std::cin.eof())
		exit(1);
	if (PhoneNumber == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		SetPhoneNumber();
	}
	return;
}

void	Contact::SetFirstName(void)
{
	std::cout << "enter first name : ";
	std::getline(std::cin, FirstName);
	if (std::cin.eof())
		exit(1);
	if (FirstName == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		SetFirstName();
	}
	return;
}

void	Contact::SetLastName(void)
{
	std::cout << "enter last name : ";
	std::getline(std::cin, LastName);
	if (std::cin.eof())
		exit(1);
	if (LastName == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		SetLastName();
	}
	return;
}

void	Contact::SetNickname(void)
{
	std::cout << "enter nickname : ";
	std::getline(std::cin, Nickname);
	if (std::cin.eof())
		exit(1);
	if (Nickname == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		SetNickname();
	}
	return;	
}

void	Contact::SetDarkestSecret(void)
{
	std::cout << "enter darkest secret : ";
	std::getline(std::cin, darkestSecret);
	if (std::cin.eof())
		exit(1);
	if (darkestSecret == "")
	{
		std::cout << "Entry Can't be empty" << std::endl;
		SetDarkestSecret();
	}
	return;
}

std::string	Contact::GetPhoneNumber(void) const {
	return (this->PhoneNumber);
}

std::string	Contact::GetFirstName(void) const {
	return (this->FirstName);
}

std::string	Contact::GetLastName(void) const {
	return (this->LastName);
}

std::string	Contact::GetNickname(void) const {
	return (this->Nickname);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}