/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:51:51 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 19:05:09 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("PresidentialPardon",145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
void    ShrubberyCreationForm::exec_form() const
{
	std::string	tree;
	tree =  "            .        +          .      .          .\n"
			"     .            _        .                    .\n"
			"  ,              /;-._,-.____        ,-----.__\n"
			" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
			"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
			"                      ,    `./  \\:. `.   )==-'  .\n"
			"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
			".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
			"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
			"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
			"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
			"              \\:  `  X` _| _,\\/'   .-'\n"
			".               \":._:`\\____  /:'  /      .           .\n"
			"                    \\::.  :\\/:'  /              +\n"
			"   .                 `.:.  /:'  }      .\n"
			"           .           ):_(:;   \\           .\n"
			"                      /:. _/ ,  |\n"
			"                   . (|::.     ,`                  .\n"
			"     .                |::.    {\\\n"
			"                      |::.\\  \\ `.\n"
			"                      |:::(\\    |\n"
			"              O       |:::/{ }  |                  (o\n"
			"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
			"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
			"dew   ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";

	std::string filename = this->getTarget() + "_shrubbery ";
	std::ofstream MyFile(filename);
	MyFile << tree;
}
void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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

std::string  ShrubberyCreationForm::getTarget() const
{
	return(_target);
}

void    ShrubberyCreationForm::beSigned(Bureaucrat& c)
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