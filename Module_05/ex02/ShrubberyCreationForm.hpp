/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:51:53 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 11:21:44 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	void    exec_form() const;
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm& sec);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& sec);
    std::string  getTarget() const;
	void    beSigned(Bureaucrat& c);
	void	execute(Bureaucrat const & executor) const;
};

