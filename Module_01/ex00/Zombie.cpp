/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:59:23 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/09 10:40:47 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout<<_name<<" mashaaaaaaaaaaaa"<<std::endl;
}

void    Zombie::announce(void)
{
    std::cout<<_name<<":  BraiiiiiiinnnzzzZ..."<<std::endl;
}

