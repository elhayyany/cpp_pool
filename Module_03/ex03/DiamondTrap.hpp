/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:24:37 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/30 13:07:56 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
//#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap(/* args */);
    DiamondTrap(DiamondTrap& f);
    DiamondTrap(std::string name);
    DiamondTrap& operator=(const DiamondTrap& a);
    void whoAmI() const;
    void set_Name(std::string name);
    std::string get_name() const;
    void virtual attack(const std::string& target);
    ~DiamondTrap();
};


#endif