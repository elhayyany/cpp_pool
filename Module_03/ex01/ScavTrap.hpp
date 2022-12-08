/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:10:11 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/30 12:41:59 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(ScavTrap& f);
	ScavTrap(std::string    name);
	ScavTrap& operator=(ScavTrap& f);
	void attack(const std::string& target);
	void guardGate();
	~ScavTrap();
};

