/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:36 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 17:54:33 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

cure::cure(/* args */)
{
    _type = "cure";
}
cure::cure(cure& cr)
{
    _type = "cure";
    (void)cr;
}
cure& cure::operator= (cure& cr)
{
    _type = "cure";
    return (*this);
    (void)cr;
}
cure::~cure()
{
    
}

AMateria* cure::clone() const
{
    return new cure();
}

void cure::use(ICharacter& target)
{
   std::cout << "* heals "<<target.getName()<<"’s wounds *"<<std::endl;
}
