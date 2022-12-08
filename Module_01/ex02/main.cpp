/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:51:36 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 17:02:39 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain;

	brain = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = brain;
	stringPTR = &brain;

	std::cout << std::endl;
	std::cout << "The memory address of string brain   = " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by &tringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string brain     = " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	std::cout << std::endl;

	brain = "HHHHHHHHH HHHHHHH";

	std::cout << std::endl;
	std::cout << "The memory address of string brain    = " << &brain << std::endl;
	std::cout << "The memory address held by *stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by &stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string brain     = " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
	std::cout << std::endl;
}