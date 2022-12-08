/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 11:32:09 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

int main()
{
    Bureaucrat  a("aziz", 5);
    Bureaucrat  b("BOB", 80);
    Bureaucrat  c("COC", 38);
    Bureaucrat  d("DOD", 91);
    Bureaucrat x("EOE",-2);
    ShrubberyCreationForm   sh("sh_target");
    RobotomyRequestForm     ro("ro_target");
    PresidentialPardonForm  pr("pr_target");
    ro.beSigned(a);
    pr.execute(a);
    pr.execute(b);
    sh.beSigned(a);
    sh.execute(a);
    sh.execute(d);
    a.executeForm(ro);
}