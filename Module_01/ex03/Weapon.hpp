/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:41:08 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/05/26 18:41:05 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string name);
		~Weapon();
		void            	setType(std::string name);
		const std::string    GetType(void);
};

#endif