/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:51:46 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 11:36:17 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <chrono>
#include <thread>
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("PresidentialPardon",72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string  RobotomyRequestForm::getTarget()
{
    return(_target);
}
void    RobotomyRequestForm::exec_form() const
{
    srand(time(0));
    for (size_t i = 0; i < 20; i++)
        {
            std::cout<<"# ";
            std::this_thread::sleep_for(std::chrono::milliseconds(5));
        }
    srand(time(0));
	if (rand() % 2)
        std::cout <<" "<<_target<< " has been robotomized successfully 😎"<<std::endl;
    else
        std::cout <<" "<<_target<< "  hasn't been robotomized successfully 😔"<<std::endl;
}
void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getGrade_RTE() < executor.get_Grade())
			throw GradeTooLowException();
        if (!getStatus())
            throw THisFormNotSinged();
		exec_form();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
void    RobotomyRequestForm::beSigned(Bureaucrat& c)
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