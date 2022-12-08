/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:49:02 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/25 17:22:29 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    Dog(std::string name);
    Dog(Dog const &src);
    Dog &operator=(Dog const &rhs);
    void makeSound() const;
    void SetType(std::string name);
    std::string GetType() const;
    ~Dog();
};
#endif