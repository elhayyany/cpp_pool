/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:58:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/19 10:58:36 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(/* args */);
    FragTrap(std::string name);
    FragTrap(FragTrap& f);
    void highFivesGuys(void);
    ~FragTrap();
    FragTrap& operator=(FragTrap& f);
    void    Set__Name(std::string name);
};


