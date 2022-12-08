/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:09:02 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/16 11:54:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x1, const float y1) :_x(x1), _y(y1)
{
}
Point::Point(const Fixed x1, const Fixed y1) :_x(x1), _y(y1)
{
}

Point::Point(const Point& f): _x(f._x), _y(f._y)
{
}

Point Point::operator = (const Point& f)
{
	return (Point(f._x, f._y));
}

Fixed Point::getx()
{
	return (_x);
}
Fixed Point::gety()
{
	return (_y);
}

Point::~Point()
{
}

