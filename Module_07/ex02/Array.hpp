/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:36:13 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 14:15:35 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
//#include <Array.hpp>
template<class T>
class Array
{
private:
    T   *arr;
    int n;
public:
    class badindex : public std::exception
	{
 	public:
		const char * what () const _NOEXCEPT;
	};
    Array();
    ~Array();
    Array(int   n);
    Array(Array& ar);
    Array& operator=(Array& arr);
    T& operator[](int dex);
    int size();
};
#include "Array.tpp"
#endif