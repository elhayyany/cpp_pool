/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:52:14 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/01 16:05:42 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template<typename T> void print(T& c)
{
    std::cout<<c<<std::endl;
}

template<typename T> void    iter(T arr[], size_t i, void(*func)(T& ar))
{
    for(size_t j = 0; j < i; j++)
    {
        func(arr[j]);
    }
}

#endif