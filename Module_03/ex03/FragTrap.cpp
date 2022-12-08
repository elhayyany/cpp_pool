/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:58:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/21 15:03:52 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(/* args */)//: ClapTrap(100, 100, 30)
{
    _AttackDamage = 30;
	_EnergyPoint = 100;
	_HitPoint = 100;
    std::cout<<"FragTrap defult constrsctor"<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)//, 100, 100, 30)
{
    _AttackDamage = 30;
	_EnergyPoint = 100;
	_HitPoint = 100;
    std::cout<<"FRAG: string constructer called"<<std::endl;
}
FragTrap::FragTrap(FragTrap& f) : ClapTrap(f)
{
    std::cout<<"FragTrap: copy constrsctor"<<std::endl;

}

FragTrap& FragTrap::operator=(FragTrap& f)
{
    std::cout<<"FragTrap assignment constrsctor"<<std::endl;
    this->Set_attackDamage(f.Get_attackDamage());
    this->Set_energypoint(f.Get_energypoint());
    this->Set_hitpoin(f.Get_hitpoin());
    this->Set__Name(f.Get_Name());
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (_EnergyPoint > 0 && _HitPoint > 0)
        std::cout<<Get_Name() <<" asking for high fives ?"<<std::endl;
    else
        std::cout<<_name<<" out of game"<<std::endl;
}

void   FragTrap::Set__Name(std::string name)
{
    Set_Name(name);
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap deconstrsctor"<<std::endl;
}
