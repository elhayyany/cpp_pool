/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:33:59 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 16:42:27 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie  *Zombiee;

	Zombiee = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Zombiee[i].set_name(name);
	}
	return (Zombiee);
}