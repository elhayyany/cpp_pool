/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:29 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/22 11:17:49 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ice_HPP
#define ice_HPP
// #include "cure.hpp"
#include "AMateria.hpp"

class ice : public AMateria
{
private:
    /* data */
public:
    ice(/* args */);
    ice(ice&);
    ice& operator= (ice&);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~ice();
};
#endif