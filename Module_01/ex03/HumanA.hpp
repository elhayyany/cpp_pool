/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:55:54 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 18:41:11 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon  &_wpon;
public:
    HumanA(std::string name, Weapon &wpon);
    ~HumanA();
    void    attack();
};
#endif