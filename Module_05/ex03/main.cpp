/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 16:33:41 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"

// int main()
// {
//     Bureaucrat a("aziz", 455);
//     a.desplay();
//     ++a;
//     a.desplay();
//     ++a;
//     ++a;
//     --a;
//     --a;
//     --a;
//     --a;
//     --a;
//     --a;
//     --a;
//     --a;
//     a.desplay();
// }


// int main()
// {
//     Bureaucrat  a("azz", 5);
//     Form        c;
//     ++a;
//     a.desplay();
//     --a;
//     a.desplay();
//     c.beSigned(a);
//     a.signedForm(c.getStatus(), c.getName());
//     std::cout<<a<<std::endl;
// }
// int main()
// {
//     Bureaucrat  a;
    
//     ++a;
//     a.desplay();
//     --a;
//     a.desplay();
//     std::cout<<a<<std::endl;
// }

// int main()
// {
//     Bureaucrat  a("aziz", 5);
//     Bureaucrat  b("BOB", 80);
//     Bureaucrat  c("COC", 38);
//     Bureaucrat  d("DOD", 91);
//     ShrubberyCreationForm   sh("sh_target");
//     RobotomyRequestForm     ro("ro_target");
//     PresidentialPardonForm  pr("pr_target");
//     pr.execute(a);
//     pr.execute(b);
//     sh.beSigned(a);
//     sh.execute(a);
// }



int main()
{
    Bureaucrat p("omar", 5);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy requestfgfvjjhhfgh", "Bender");
    if (rrf)
    {
        rrf->beSigned(p);
        
    }
}