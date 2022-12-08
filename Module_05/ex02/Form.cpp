/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:24:44 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 15:05:59 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(/* args */) : _name("shahada"), _grade_RTS(15), _grade_RTE(7)
{
    _is_singed = 0;
}
Form::Form(const std::string name, const int grade_RTS , const int grade_RTE)
: _name(name), _grade_RTS(grade_RTS), _grade_RTE(grade_RTE)
{
    if ( _grade_RTE < 0 || _grade_RTS < 0)
        throw GradeTooHighException();
    if (_grade_RTE > 150 || _grade_RTS > 150 )
        throw GradeTooLowException();
    _is_singed = 0;
}
Form::Form(Form &f) : _name(f._name), _is_singed(f._is_singed), _grade_RTS(f._grade_RTS), _grade_RTE(f._grade_RTE)
{
}

Form::~Form()
{
}

void        Form::setSinged()
{
    _is_singed = 1;
}
std::ostream& operator<<(std::ostream& out, Form& c)
{
    std::string si;

    if (c.getStatus())
        si = "signed";
    else
        si = "unsigned";
    out<<c.getName()<<" is "<<si<<" and the grade requared to signed it is "
    <<c.getGrade_RTS()<<"and the greade requared to execut it is "<<c.getGrade_RTE()<<std::endl;
    return (out);
}
const char * Form::GradeTooLowException::what () const _NOEXCEPT
{
    return ("Grade too low Exeption");
}
const char * Form::GradeTooHighException::what () const _NOEXCEPT
{
    return ("Grade too high Exeption");
}
const char * Form::THisFormNotSinged::what () const _NOEXCEPT
{
    return ("THis Form is Not Singed exception");
}

std::string Form::getName() const
{
    return (_name);
}
int         Form::getStatus()const
{
    return (_is_singed);
}
int         Form::getGrade_RTS()const
{
    return (_grade_RTS);
}
int         Form::getGrade_RTE()const
{
    return (_grade_RTE);
}