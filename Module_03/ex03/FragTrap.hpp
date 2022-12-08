/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:58:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/19 10:58:43 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
    /* data */
public:
    FragTrap(/* args */);
    FragTrap(FragTrap& f);
    FragTrap(std::string name);
    FragTrap(std::string name, int h, int a);
    void highFivesGuys(void);
    ~FragTrap();
    FragTrap& operator=(FragTrap& f);
    void    Set__Name(std::string name);
};
#endif

