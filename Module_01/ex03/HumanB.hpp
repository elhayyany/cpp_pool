/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:22:04 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 18:41:07 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon  *_wpon;
public:
    HumanB(std::string name);
    void    setWeapon(Weapon wp);
    void    attack();
    ~HumanB();
};


#endif