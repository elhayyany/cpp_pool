/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:00:14 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 13:45:54 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
    std::cout<<"ANIMAL const"<<std::endl;
}
Animal::Animal(std::string name ): type__(name)
{
    std::cout<<"ANIMAL const"<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"ANIMAL DEconst"<<std::endl;
}
Animal::Animal(Animal& a)
{
    type__ = a.type__;
    std::cout<<"ANIMAL copy const"<<std::endl;
}

Animal& Animal::operator= (Animal& a)
{
    std::cout<<"ANIMAL assinment const"<<std::endl;
    this->type__ = a.type__;
    return (*this);
}

std::string	Animal::GetType() const
{
    return (type__);
}
void	 Animal::SetType(std::string name)
{
    type__ = name;
}