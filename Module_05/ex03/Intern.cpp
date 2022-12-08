/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:14:56 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/28 18:29:40 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}
const char * Intern::excep::what () const _NOEXCEPT
{
    return ("there is no Form with this name");
}

Intern::Intern(Intern& c)
{
    (void)c;
}
Intern& Intern::operator=(Intern& c)
{
    (void)c;
    return (*this);
}

Form*   Intern::makeForm( std::string FormName, std::string target)
{
    try
    {
        std::string arr[3];
        int j = -1;
        arr[0] = "robotomy request";
        arr[1] = "shrubbery creation";
        arr[2] = "presidentialPardonForm";
        for (size_t i = 0; i < 3; i++)
            if (arr[i] == FormName)
                j = i;
        switch (j)
        {
            case 0:
                std::cout<<"Intern creates "<<FormName<<std::endl;
                return (new RobotomyRequestForm(target));
            case 1:
                std::cout<<"Intern creates "<<FormName<<std::endl;
                return (new ShrubberyCreationForm(target));
            case 2:
                std::cout<<"Intern creates "<<FormName<<std::endl;
                return (new PresidentialPardonForm(target));
            default:
                throw excep();
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}