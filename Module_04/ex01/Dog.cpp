/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:49:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:36:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(/* args */)
{
    type__ = "Dog";
    std::cout<<"DOG DEFconst"<<std::endl;
    ideas = new Brain();
}

Dog::~Dog()
{
    delete ideas;
    std::cout<<"DOG DESconst"<<std::endl;
}
Dog::Dog(std::string name) : Animal(name)
{
    std::cout<<"DOG const"<<std::endl;
    ideas = new Brain();
}
Dog::Dog(Dog const &src)
{
    std::cout<<"DOG COPconst"<<std::endl;
    ideas = new Brain();
    for(int i = 0; i < 100; i++)
        ideas->ideas[i] = src.ideas->ideas[i];
    type__ = src.type__;
}
Dog &Dog::operator=(Dog const &rhs)
{
    std::cout<<"DOG ASSINconst"<<std::endl;
    if (ideas)
        delete ideas;
    this->type__ = rhs.type__;
    ideas = new Brain();
    for(int i = 0; i < 100; i++)
        ideas->ideas[i] = rhs.ideas->ideas[i];
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

