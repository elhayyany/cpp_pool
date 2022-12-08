/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:21:42 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/09 11:21:33 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _wpon(0) {}

void    HumanB::setWeapon(Weapon wp)
{
    _wpon = &wp;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout<< _name<< " attacks with their "<<_wpon->GetType()<<std::endl;
}