/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:43:44 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 18:42:09 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

void    Weapon::setType(std::string type)
{
    _type = type;
}

const std::string   Weapon::GetType(void)
{
    return(_type);
}
Weapon::~Weapon()
{
    
}