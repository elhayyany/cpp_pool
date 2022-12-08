/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:59:13 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 21:17:01 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type__;
public:
	virtual std::string	GetType() const;
	virtual void	 SetType(std::string);
	Animal(/* args */);
	Animal(Animal& a);
	virtual void makeSound() const;
	Animal& operator= (Animal& a);
	Animal(std::string name);
	virtual ~Animal();
};

#endif