/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 19:30:20 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
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


int main()
{
    Bureaucrat  a("azz", 5);
    Form        c;
    ++a;
    a.desplay();
    --a;
    a.desplay();
    c.beSigned(a);
    a.signedForm(c);
    Form s("s", 1,1);
    a.signedForm(s);
    std::cout<<a<<std::endl;
}
// int main()
// {
//     Bureaucrat  a;
    
//     ++a;
//     a.desplay();
//     --a;
//     a.desplay();
//     std::cout<<a<<std::endl;
// }

