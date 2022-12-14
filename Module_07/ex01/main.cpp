/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:52:16 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 13:52:34 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int a[10] = {0};

    char c[10] = {'a','s','d','f','g','h','j','k','l','z'};
    std::string z[5] = {"aziz", "qaqaqa", "azsxdc", "dsdczaz", "34tr"};
    iter(a, 10, &print);
    iter(c, 10, &print);
    iter(z, 5, &print);
}