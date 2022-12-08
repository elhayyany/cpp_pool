/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:18 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 21:11:49 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
protected:
    std::string     type__;
public:
    std::string	GetType() const;
	void	 SetType(std::string);
	WrongAnimal(/* args */);
	WrongAnimal(WrongAnimal& a);
	void makeSound() const;
	WrongAnimal& operator= (WrongAnimal& a);
	WrongAnimal(std::string name);
	~WrongAnimal();
};


#endif