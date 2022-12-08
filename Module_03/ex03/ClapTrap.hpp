/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:23 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/18 16:38:01 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
// #pragma
#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_HitPoint;
	unsigned int	_EnergyPoint;
	unsigned int	_AttackDamage;
public:
	ClapTrap();
	ClapTrap(ClapTrap& f);
	ClapTrap(std::string name);
	ClapTrap& operator=(ClapTrap& f);
	void 		attack(const std::string& target);
	void 		takeDamage(unsigned int amount);
	void 		beRepaired(unsigned int amount);
	unsigned int			Get_hitpoin() const;
	unsigned int			Get_energypoint() const;
	unsigned int			Get_attackDamage() const;
	void		Set_hitpoin(int const	a);
	void		Set_energypoint(int const	a) ;
	void		Set_attackDamage(int const	a) ;
	std::string Get_Name() const;
	void	 	Set_Name(std::string name);
	~ClapTrap();
};

#endif
