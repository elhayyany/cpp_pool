/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:28:23 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:42:03 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
    type__ = "WrongCat";
}
WrongCat::~WrongCat(/* args */)
{
    std::cout<<"CAT DESconst"<<std::endl;
}

WrongCat::WrongCat(std::string name)
{
    std::cout<<"CAT const"<<std::endl;
    type__ = name;
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout<<"CAT CPconst"<<std::endl;
    this->type__ = src.type__;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    std::cout<<"CAT AASINconst"<<std::endl;
    this->type__ = rhs.type__;
    return (*this);
}

void    WrongCat::SetType(std::string type)
{
    this->type__ = type;
}
std::string WrongCat::GetType() const
{
    return (this->type__);
}