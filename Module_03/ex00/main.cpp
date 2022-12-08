/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/18 13:22:34 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap me("aziz");
    ClapTrap they("they");
    ClapTrap x(me);
    me.attack(they.Get_Name());
    me.takeDamage(2);
    me.takeDamage(2);
    me.beRepaired(50);
}
