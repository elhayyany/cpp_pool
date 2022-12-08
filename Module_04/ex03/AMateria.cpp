/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:45 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 18:44:39 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
    
}

AMateria& AMateria::operator=(AMateria& str)
{
    (void)str;
    return (*this);
}

AMateria::AMateria(AMateria& str)
{
    (void)str;
}

std::string const & AMateria::getType() const
{
    return(_type);
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout<<"ice: * shoots an ice bolt at "<< target.getName() <<" *"<<std::endl;
    else
        std::cout<<"Cure: * heals "<< target.getName() <<"’s wounds *"<<std::endl;
}