/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:23:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:36:28 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */)
{
    std::cout<<"CAT const"<<std::endl;
    type__ = "Cat";
    ideas = new Brain();
}
Cat::~Cat(/* args */)
{
    delete ideas;
    std::cout<<"CAT Decconst"<<std::endl;
}

Cat::Cat(std::string name)
{  
    std::cout<<"CAT const"<<std::endl;
    type__ = name;
    ideas = new Brain();
}

Cat::Cat(Cat const &src)
{
    std::cout<<"CAT CPconst"<<std::endl;
    this->type__ = src.type__;
    ideas = new Brain();
    for(int i = 0; i < 100; i++)
        ideas->ideas[i] = src.ideas->ideas[i];
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout<<"CAT AASINconst"<<std::endl;
    if(ideas)
        delete ideas;
    this->type__ = rhs.type__;
    ideas = new Brain();
    for(int i = 0; i < 100; i++)
        ideas->ideas[i] = rhs.ideas->ideas[i];
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
