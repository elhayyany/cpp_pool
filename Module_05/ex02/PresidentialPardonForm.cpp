/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:51:42 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 11:23:52 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardon",25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & y) : Form(y)
{
	
}
std::string  PresidentialPardonForm::getTarget()
{
    return(_target);
}
void    PresidentialPardonForm::exec_form() const
{
	std::cout<< _target << "has been pardoned by Zaphod Beeblebrox"<<std::endl;
}
void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!getStatus())
			throw THisFormNotSinged();
		if (getGrade_RTE() < executor.get_Grade())
			throw GradeTooLowException();
		exec_form();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
void    PresidentialPardonForm::beSigned(Bureaucrat& c)
{
	  try
    {
        if (c.get_Grade() > getGrade_RTS() )
            throw GradeTooLowException();
        setSinged();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	c.signedForm(*this);
}