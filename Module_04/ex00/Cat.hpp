/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:25:26 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/25 17:22:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    void SetType(std::string type);
    std::string GetType() const;
    Cat(std::string name);
    Cat(Cat const &src);
    Cat &operator=(Cat const &rhs);
    void makeSound() const;
    ~Cat();
};
#endif