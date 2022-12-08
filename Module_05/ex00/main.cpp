/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:15:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 18:23:36 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Bureaucrat  a;
    ++a;
    a.desplay();
    --a;
    a.desplay();
    std::cout<<a<<std::endl;

    Bureaucrat me("aziz", 2);
    me.desplay();
    ++me;
    me.desplay();
    ++me;
}