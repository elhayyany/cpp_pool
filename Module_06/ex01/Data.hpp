/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:01:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/07/31 15:12:00 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H__
#define DATA_H__
#include <iostream>
struct Data
{
    int     hada_int;
    float   hada_float;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif