/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/28 18:37:46 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
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
	Bureaucrat(const std::string name, int	grade);
	Bureaucrat(Bureaucrat&);
	Bureaucrat operator=(Bureaucrat&);
	void	desplay();
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();
	std::string	get_Name();
	int			get_Grade();
	~Bureaucrat();
};
std::ostream & operator << (std::ostream &out, Bureaucrat&c);


#endif