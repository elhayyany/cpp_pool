/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:27 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 15:30:53 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int			Bureaucrat::get_Grade() const
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
void    Bureaucrat::signedForm(Form& form)
{
    if (form.getStatus())
        std::cout<<_name<<" signed "<<form.getName()<<std::endl;
    else
        std::cout<<_name<<" couldn’t sign "<<form.getName()<<", because my grate is too low "<<std::endl;
}

void    Bureaucrat::executeForm(Form const & form) const
{
    if (form.getGrade_RTE() <= _grade)
        std::cout<<_name<<" couldn’t execute "<<form.getName()<<", because my grate is too low "<<std::endl;
    else if (!form.getStatus())
        std::cout<<_name<<" couldn’t execute "<<form.getName()<<", because the form is not singed "<<std::endl;
    else
    {
        form.execute(*this);
        std::cout<<_name<<" Execut "<<form.getName()<<std::endl;
    }
}
