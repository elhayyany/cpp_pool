/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:18 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:41:39 by ael-hayy         ###   ########.fr       */
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
    virtual std::string	GetType() const;
	virtual void	 SetType(std::string);
	WrongAnimal(/* args */);
	WrongAnimal(WrongAnimal& a);
	virtual void makeSound() const = 0;
	WrongAnimal& operator= (WrongAnimal& a);
	WrongAnimal(std::string name);
	virtual ~WrongAnimal();
};


#endif