/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:42:30 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/14 12:27:41 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
int main()
{
    Zombie *aziz;
    int     k = 8;
    aziz = zombieHorde(k, "aziz");
    for (int i = 0; i < k; i++)
    {
        aziz[i].announce();
    }
    delete [] aziz;
}