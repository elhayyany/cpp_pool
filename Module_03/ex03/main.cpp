/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/18 17:15:13 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap a;
    DiamondTrap b("BB");
    a.guardGate();
    a.highFivesGuys();
    b.attack("Diamond");
    a.takeDamage(20);
    a.beRepaired(20);
    a.attack("BB");
    b.takeDamage(100);
    b.beRepaired(100);
    b.attack("Diamond");
    a.beRepaired(100);
    a.attack("BB");
    b.takeDamage(100);
    b.beRepaired(100);
    b.attack("Diamond");
    a.beRepaired(100);
    a.attack("BB");
    b.takeDamage(100);
    b.beRepaired(100);
    b.attack("Diamond");
    a.beRepaired(100);
    a.attack("BB");
    a.whoAmI();
}
