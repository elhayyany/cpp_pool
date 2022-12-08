/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:52:28 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/09 10:42:13 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *aziz = newZombie("aziz");
    aziz->announce();
    randomChump("azoz");
    delete aziz;
    //system("leaks BraiiiiiiinnnzzzZ");
}