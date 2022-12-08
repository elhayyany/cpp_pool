/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:16 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/21 14:10:54 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout<<"CLAP: Defult constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _HitPoint(10), _EnergyPoint(10), _AttackDamage(0)
{
	std::cout<<"CLAP: string constructer called" <<std::endl;
}
ClapTrap::ClapTrap(ClapTrap& f): _name(f.Get_Name()), _HitPoint(f.Get_hitpoin()), _EnergyPoint(f.Get_energypoint()), _AttackDamage(f.Get_attackDamage())
{	
	std::cout<<"CLAP: copy constructor called" <<std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap& f)
{
	_name = f._name;
	_HitPoint = f._HitPoint;
	_EnergyPoint = f._EnergyPoint;
	_AttackDamage = f._AttackDamage;
	std::cout<<"assignment constructor called"<<std::endl;
	return (*this);
}
void ClapTrap::attack(const std::string& target)
{
	if (_EnergyPoint > 0 && Get_hitpoin() > 0)
	{
		std::cout<<std::endl<<"...............[   "<<_name<<"   ]............"<<std::endl;
		std::cout<<_name<<" attacks "<<target<<" causing "<<		_AttackDamage<< "points of damage!"<<std::endl;
		_EnergyPoint--;
		std::cout<<"Energy Point : "<<_EnergyPoint<<std::endl;
		std::cout<<"Attack Damage: "<<_AttackDamage<<std::endl;
		std::cout<<"Hit Point    : "<<_HitPoint<<" "<<std::endl;
		std::cout<<"...............[  "<<_name<<"  ]............"<<std::endl;
	}
	else
	{
		std::cout<<_name<<"is out of game"<<std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_EnergyPoint > 0 && Get_hitpoin() > 0)
	{
		std::cout<<std::endl<<"...............[   "<<_name<<"   ]............"<<std::endl;
		std::cout<< _name<<" take "<<amount<<" of damage!"<<std::endl;
		if (_HitPoint > amount)
			_HitPoint -= amount;
		else
			_HitPoint = 0;
		std::cout<<"Hit Point: "<<_HitPoint<<" "<<std::endl;
		std::cout<<"...............[   "<<_name<<"   ]............"<<std::endl;
	}
	else
	{
		std::cout<<_name<<"is out of game"<<std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoint > 0 && Get_hitpoin() > 0)
	{
		std::cout<<std::endl<<"...............[   "<<_name<<"   ]............"<<std::endl;
		_HitPoint += amount;
		std::cout<< _name<<" Repaired itself "<<amount<<" points!"<<std::endl;
		_EnergyPoint--;
		std::cout<<"Hit Point   : "<<_HitPoint<<std::endl;
		std::cout<<"Energy Point: "<<_EnergyPoint<<std::endl;
		std::cout<<"...............[   "<<_name<<"   ]............"<<std::endl;
	}
	else
	{
		std::cout<<_name<<"is out of game"<<std::endl;
	}
}

std::string ClapTrap::Get_Name()
{
	return (_name);
}

void ClapTrap::Set_Name(std::string name)
{
	_name = name;
}

ClapTrap::~ClapTrap()
{
		std::cout<<"CLAP: Decontructor called"<<std::endl;
}

unsigned int			ClapTrap::Get_hitpoin()
{
	return (_HitPoint);
}
unsigned int			ClapTrap::Get_energypoint()
{
	return (_EnergyPoint);
}
unsigned int			ClapTrap::Get_attackDamage()
{
	return (_AttackDamage);
}
void		ClapTrap::Set_hitpoin(int	a)
{
	_HitPoint = a;
}
void		ClapTrap::Set_energypoint(int	a)
{
	_EnergyPoint = a;
}
void		ClapTrap::Set_attackDamage(int	a)
{
	_AttackDamage = a;
}