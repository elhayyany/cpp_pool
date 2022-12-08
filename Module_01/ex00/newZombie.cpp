/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:14:47 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 16:15:01 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie  *Zombiee;

    Zombiee = new Zombie(name);
    return (Zombiee);
}