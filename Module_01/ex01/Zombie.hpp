/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:33:48 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 16:40:56 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Zombie
{
	private:
		std::string _name;
	public:
		void announce( void );
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );