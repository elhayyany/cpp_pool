/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:49:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/25 17:23:40 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
    type__ = "Dog";
    std::cout<<"DOG DEFconst"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"DOG DESconst"<<std::endl;
}
Dog::Dog(std::string name) : Animal(name)
{
    std::cout<<"DOG const"<<std::endl;
}
Dog::Dog(Dog const &src)
{
    std::cout<<"DOG COPconst"<<std::endl;
    type__ = src.type__;
}
Dog &Dog::operator=(Dog const &rhs)
{
    std::cout<<"DOG ASSINconst"<<std::endl;
    this->type__ = rhs.type__;
    return(*this);
}
void    Dog::makeSound() const
{
    std::cout<<"||||||          ana osamaoooo          ||||||"<<std::endl;
}

void    Dog::SetType(std::string type)
{
    this->type__ = type;
}

std::string Dog::GetType() const
{
    return (this->type__);
}

