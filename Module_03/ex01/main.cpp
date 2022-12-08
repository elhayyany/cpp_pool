/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/18 15:59:02 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"


int main()
{
    ScavTrap a("rachd");
    a.attack("pp");
    a.takeDamage(5);
    a.guardGate();
    ScavTrap b(a);
    b.attack("kiled");
    b.takeDamage(4);
    b.beRepaired(20);
    ScavTrap c = b;
    std::cout<<c.Get_Name()<<std::endl;
    c.attack("howaaaaaa");
}