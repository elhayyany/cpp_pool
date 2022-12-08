/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:33:32 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 16:49:27 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout<<_name<<": baaaaaaaaaa7"<<std::endl;
}

void    Zombie::announce(void)
{
    std::cout<<_name<<":  BraiiiiiiinnnzzzZ..."<<std::endl;
}

void    Zombie::set_name(std::string name)
{
    _name = name;
}