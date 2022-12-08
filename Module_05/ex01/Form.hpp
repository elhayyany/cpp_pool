/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:33:51 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/28 18:47:54 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
class Bureaucrat;
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
    Form();
    Form(Form &f);
    Form operator=(Form &f);
    std::string getName();
    int         getStatus();
    int         getGrade_RTS();
    int         getGrade_RTE();
    Form(const std::string name , const int grade_RTS , const int grade_RTE);
    void    beSigned(Bureaucrat& c);
    ~Form();
};

std::ostream& operator<<(std::ostream& out, Form& c);

#endif