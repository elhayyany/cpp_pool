/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/30 13:02:22 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "FragTrap.hpp"


int main()
{
    FragTrap a("rachd");
    a.attack("pp");
    a.takeDamage(5);
    FragTrap b = a;
    a.attack("lll");
    a.highFivesGuys();
    FragTrap j(a);
    std::cout<<j.Get_Name()<<std::endl;
}