/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:44:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 12:50:37 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


int main()
{
    uintptr_t aziz;
    aziz = 848;
    Data l;
    l.hada_float = 0.8f;
    l.hada_int = 8;
    Data * ll = &l;
    ll = deserialize(serialize(ll));
    std::cout<<(*ll).hada_float<<std::endl;
    Data *me = deserialize(aziz);
    std::cout<<me<<std::endl;
    Data* ome = deserialize(serialize(me));
    std::cout<<ome<<std::endl;

}