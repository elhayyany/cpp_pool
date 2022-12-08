/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:15:01 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 12:02:04 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern& c);
    Intern& operator=(Intern& c);
    Form*   makeForm(std::string FormName, std::string target);
    class excep : public std::exception
    {
    public:
        public:
		const char * what () const _NOEXCEPT;
    };
    ~Intern();
};


