/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:21 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:50:58 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"
int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new ice());
    src->learnMateria(new cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    //system("leaks Interfaces");
    return 0;
}