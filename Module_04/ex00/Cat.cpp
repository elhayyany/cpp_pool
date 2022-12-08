/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:23:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/24 21:47:01 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
    std::cout<<"CAT constructer called"<<std::endl;
    type__ = "Cat";
}
Cat::~Cat(/* args */)
{
    std::cout<<"CAT DESconst"<<std::endl;
}

Cat::Cat(std::string name)
{
    std::cout<<"CAT const"<<std::endl;
    type__ = name;
}

Cat::Cat(Cat const &src)
{
    std::cout<<"CAT CPconst"<<std::endl;
    this->type__ = src.type__;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout<<"CAT AASINconst"<<std::endl;
    this->type__ = rhs.type__;
    return (*this);
}
void    Cat::makeSound() const
{
    std::cout<<"||||||          meow          ||||||"<<std::endl;
}
void    Cat::SetType(std::string type)
{
    this->type__ = type;
}
std::string Cat::GetType() const
{
    return (this->type__);
}
