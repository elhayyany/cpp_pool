/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:18:39 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 13:49:16 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hpp.hpp"

Base * generate(void)
{
    std::srand(time(0));
    int i = rand() % 3 + 1;
    if (i == 1)
        return (new A);
    if (i == 2)
        return (new B);
    return (new C);
}