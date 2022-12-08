/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:09:00 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/17 16:11:31 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	abs(Fixed d)
{
    if (d.getRawBits() < 0)
        d.setRawBits(d.getRawBits() * -1);
    return (d);
}
Fixed   area(Point a, Point b, Point c)
{
    return (abs( a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / Fixed(2));
}
bool bsp( Point const a, Point  b, Point const c, Point const point)
{
    Fixed   abc(area(a, b, c));
    Fixed   abp(area(a, b, point));
    Fixed   apc(area(a, point, c));
    Fixed   pbc(area(point, b, c));
    Fixed   z = (abp + apc);
    z = z + pbc;
    if ((abp * apc * pbc).toFloat() == 0)
        return (0);
    if (abc == z)
        return 1;
    return (0);
}