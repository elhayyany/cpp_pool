/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 19:02:44 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include <fstream>
class Form;
class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
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

	Bureaucrat(/* args */);
	Bureaucrat(Bureaucrat&);
	Bureaucrat operator=(Bureaucrat&);
	Bureaucrat(const std::string name, int	grade);
	void	desplay();
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();
	std::string	get_Name();
	int			get_Grade() const;
	void    signedForm(Form& form);
	void	executeForm(Form const & form) const;
	~Bureaucrat();
};
std::ostream & operator << (std::ostream &out, Bureaucrat&c);


#endif