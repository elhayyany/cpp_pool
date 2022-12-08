/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 12:48:14 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "Character.hpp"
class ICharacter;
class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria& operator=(AMateria& str);
    AMateria(AMateria& str);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif