/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:24:42 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/28 18:54:06 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H__
#define FORM_H__
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string   _name;
    bool                _is_singed;
    const int           _grade_RTS;
    const int           _grade_RTE;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const _NOEXCEPT;
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const _NOEXCEPT;
	};
	class THisFormNotSinged : public std::exception
	{
	public:
		const char * what () const _NOEXCEPT;
	};
    Form();
	Form(Form &f);
    std::string getName() const;
    int         getStatus() const;
    int         getGrade_RTS() const;
    int         getGrade_RTE() const;
    void        setSinged();
    virtual void execute(Bureaucrat const & executor) const = 0;
    Form(const std::string name , const int grade_RTS , const int grade_RTE);
    virtual void    beSigned(Bureaucrat& c) = 0;
    ~Form();
};

std::ostream& operator<<(std::ostream& out, Form& c);

#endif