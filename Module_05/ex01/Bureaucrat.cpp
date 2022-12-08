/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:27 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 15:09:20 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat::Bureaucrat(/* args */) : _name("lm9dm")
{
    _grade = 75;
}
Bureaucrat::Bureaucrat(Bureaucrat& src) : _name(src._name), _grade(src.get_Grade())
{
}
Bureaucrat Bureaucrat::operator=(Bureaucrat& src)
{
    Bureaucrat tem(src._name, src._grade);
    return tem;
}
Bureaucrat::Bureaucrat(const std::string name, int    grade) : _name(name)
{
     try
    {
        if (grade < 1)
            throw   GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
        _grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        _grade = 75;
    }
}
Bureaucrat&	Bureaucrat::operator++()
{
    try
    {
        if (_grade == 1)
            throw   GradeTooHighException();
       _grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (*this);
}
Bureaucrat&	Bureaucrat::operator--()
{
    try
    {
        if (_grade == 150)
            throw   GradeTooLowException();
       _grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (*this);
}
std::string	Bureaucrat::get_Name()
{
    return (_name);

}
int			Bureaucrat::get_Grade()
{
    return (_grade);
    
}
Bureaucrat::~Bureaucrat()
{
    
}

void	Bureaucrat::desplay()
{
    std::cout<<"the grade of "<<_name<<" is "<<_grade<<std::endl;
}

const char *Bureaucrat::GradeTooHighException::what () const _NOEXCEPT
{
    return "Grade Too High Exception";
}
const char *Bureaucrat::GradeTooLowException::what () const _NOEXCEPT
{
    return "Grade Too Low Exception";
}

std::ostream & operator << (std::ostream &out, Bureaucrat&c)
{
    out << c.get_Name() <<"'s grade is "<<c.get_Grade()<<std::endl;
    return out;
}

void    Bureaucrat::signedForm(Form form)
{
    if (get_Grade() <= form.getGrade_RTS())
    {
        form.beSigned(*this);
        std::cout<<get_Name()<<" singned "<<form.getName()<<std::endl;
    }
    else
    {
        std::cout<<get_Name()<<" couldn’t sign "<<form.getName()<<" because his grade is too low ."<<std::endl;
    }
}
