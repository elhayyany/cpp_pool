/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:24:35 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/18 17:18:32 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */)
{
    Set_energypoint(50);
    Set_hitpoin(100);
    this->_name = "Diamond";
    Set_Name("Diamond_clap_name");
    Set_attackDamage(30);
    std::cout<<"DIAMOND: deful constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& f): ScavTrap(f), FragTrap(f)
{
    DiamondTrap::Set__Name(f._name + "_clap_name");
    this->_name = f._name;
    std::cout<<"DIAMOND: cpy constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
    Set_Name(_name + "_clap_name");
    Set_energypoint(50);
    Set_hitpoin(100);
    this->_name = name;
    Set_attackDamage(30);
    std::cout<<"DIAMOND: string constructor called"<<std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& a)
{
    this->Set_attackDamage(a.Get_attackDamage());
    this->Set_energypoint(a.Get_energypoint());
    this->Set_hitpoin(a.Get_hitpoin());
    this->Set_Name(a.Get_Name());
    _name = a.get_name();
    std::cout<<"DIAMOND: operator constructor called"<<std::endl;
    return (*this);
}
void DiamondTrap::set_Name(std::string name)
{
    _name = name;
}
std::string DiamondTrap::get_name() const
{
    return (_name);
}
void DiamondTrap::whoAmI() const
{
    std::cout<<"my name is: "<<_name<<std::endl;
    std::cout<<"my grandpa's name is: "<<ClapTrap::_name<<std::endl;
}
void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
DiamondTrap::~DiamondTrap()
{
}