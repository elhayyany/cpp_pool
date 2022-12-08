/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:23:18 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/01 14:48:16 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T> T max(T& fth, T& sth)
{
    if(fth > sth)
        return (fth);
    return (sth);
}

template<typename T>  void    swap(T& fth, T& sth)
{
    T   temp = fth;

    fth = sth;
    sth = temp;
}

template<typename T>  T min(T& fth, T& sth)
{
    if(fth < sth)
        return (fth);
    return (sth);
}  

#endif