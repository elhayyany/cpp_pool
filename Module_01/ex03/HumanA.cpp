/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:55:57 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 18:41:28 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn)
	:_name(name), _wpon(wpn)  {}

void    HumanA::attack(void)
{
	std::cout<< _name<< " attacks with their "<<_wpon.GetType()<<std::endl;
}

HumanA::~HumanA()
{
	
}
