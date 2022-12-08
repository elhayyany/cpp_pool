/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:52:33 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/09 10:40:18 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Zombie
{
	private:
		std::string _name;
	public:
		void announce( void );
		Zombie(std::string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );