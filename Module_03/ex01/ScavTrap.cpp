/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:10:09 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/21 14:50:21 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()// : ClapTrap(100, 50, 20)
{
	_AttackDamage = 20;
	_EnergyPoint = 50;
	_HitPoint = 100;
    std::cout<<"ScavvTrap Defult constructor called"<<std::endl;
}
ScavTrap::ScavTrap(std::string    name) : ClapTrap(name)//, 100, 50, 20)
{
	_AttackDamage = 20;
	_EnergyPoint = 50;
	_HitPoint = 100;
    std::cout<<"ScavvTrap string constructor called"<<std::endl;
}
ScavTrap::ScavTrap(ScavTrap& f): ClapTrap(f) 
{
	std::cout<<"SCAV: copy constructor called" <<std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap& f)
{
    this->Set_Name(f.Get_Name());
    this->Set_attackDamage(f.Get_attackDamage());
    this->Set_energypoint(f.Get_energypoint());
    this->Set_hitpoin(f.Get_hitpoin());
	std::cout<<"SCAV: assinment constructor called" <<std::endl;
    return(*this);
}
void ScavTrap::attack(const std::string& target)
{
	if (Get_energypoint() > 0 && _HitPoint > 0)
	{
		std::cout<<std::endl<<"...............[   "<<Get_Name()<<"   ]............"<<std::endl;
		std::cout<<Get_Name()<<"strikes "<<target<<" causing "<< _AttackDamage<<" points of damage!"<<std::endl;
		Set_energypoint(Get_energypoint() - 1);
		std::cout<<"Energy Point: "<<Get_energypoint()<<std::endl;
		std::cout<<"Attack Damage: "<<Get_attackDamage()<<std::endl;
		std::cout<<"...............[  "<<Get_Name()<<"  ]............"<<std::endl;
	}
	else
	{
		std::cout<<_name<<"is out of game"<<std::endl;
	}
}
void ScavTrap::guardGate()
{
    std::cout<<std::endl<<"...............[   "<<Get_Name()<<"   ]............"<<std::endl;
    if (_EnergyPoint > 0 && _HitPoint > 0)
    	std::cout<< " ScavTrap is now in Gate keeper mode"<<std::endl;
    else
        std::cout<<_name<<" out of game"<<std::endl;
	std::cout<<"...............[  "<<Get_Name()<<"  ]............"<<std::endl;
}
ScavTrap::~ScavTrap()
{
    
    std::cout<<"ScavvTrap deconstructor called"<<std::endl;
}