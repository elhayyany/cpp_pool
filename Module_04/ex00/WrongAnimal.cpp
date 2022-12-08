/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:25:18 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 19:35:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
    std::cout<<"WRONG ANIMAL const"<<std::endl;
}
WrongAnimal::WrongAnimal(std::string name ): type__(name)
{
    std::cout<<"WRONG ANIMAL const"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"ANIMAL DEconst"<<std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal& a)
{
    type__ = a.type__;
    std::cout<<"ANIMAL copy const"<<std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout<<"Wronganimal "<<std::endl;

}
WrongAnimal& WrongAnimal::operator= (WrongAnimal& a)
{
    std::cout<<"W ANIMAL assinment const"<<std::endl;
    this->type__ = a.type__;
    return (*this);
}

std::string	WrongAnimal::GetType() const
{
    return (type__);
}
void	 WrongAnimal::SetType(std::string name)
{
    type__ = name;
}