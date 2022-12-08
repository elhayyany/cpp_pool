/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:31 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 17:51:17 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ice.hpp"

AMateria* ice::clone() const
{
    return (new ice());
}

ice::ice(/* args */)
{
    _type = "ice";
}
ice::ice(ice& ic)
{
    _type = "ice";
    (void)ic;
}
ice& ice::operator= (ice& ic)
{
    _type = "ice";
    (void)ic;
    return (*this);
}
ice::~ice()
{

}
void ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName()<<" *" << std::endl;
}