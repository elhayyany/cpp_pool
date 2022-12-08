/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:51:15 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:45:15 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    //Animal an;
    Animal *animals[20];
    for(int i = 0; i <4; i++)
    {
        if (i%2)
            animals[i] = new Cat("Cat");
        else
        
            animals[i] = new Dog("Dog");
    }
    for(int i = 0; i <4; i++)
    {
        animals[i]->makeSound();
    }
    for(int i = 0; i <4; i++)
    {
        delete animals[i];
    }
    //system("leaks Animal");


    // WrongCat cat;
    return 0;
}

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
// }