/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:09:05 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/17 16:14:36 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Fixed x, const Fixed y);
	Point(const Point& f);
	Point operator = (const Point& f);
	Fixed getx();
	Fixed gety();
	~Point();
};

Fixed	abs(Fixed d);
Fixed   area(Point a, Point b, Point c);
bool 	bsp( Point const a, Point const b, Point const c, Point const point);