/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:09:23 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/19 10:42:08 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_HitPoint;
	unsigned int	_EnergyPoint;
	unsigned int	_AttackDamage;
public:
	ClapTrap();
	ClapTrap(ClapTrap& f);
	ClapTrap(std::string name);
	ClapTrap& operator=(ClapTrap& f);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	unsigned int			Get_hitpoin();
	unsigned int			Get_energypoint();
	unsigned int			Get_attackDamage();
	void		Set_hitpoin(int	a);
	void		Set_energypoint(int	a);
	void		Set_attackDamage(int	a);
	std::string Get_Name();
	void	 	Set_Name(std::string name);
	~ClapTrap();
};


