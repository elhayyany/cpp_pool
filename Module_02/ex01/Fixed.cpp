/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:44:55 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/16 13:47:36 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	_fxd = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& f) 
{
	_fxd = f._fxd;
	std::cout<<"Copy constructor called"<<std::endl;
}
Fixed::Fixed(const int num)
{
	std::cout<<"Int constructor called"<<std::endl;
	_fxd = num << _f;
}
Fixed::Fixed(const float num)
{
	std::cout<<"Float constructor called"<<std::endl;
	_fxd = roundf(num  * (float)(1 << 8));
}
Fixed& Fixed::operator=(const Fixed& f)
{
    _fxd = f._fxd;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (_fxd);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	_fxd = raw;
}
float	Fixed::toFloat(void) const
{
	return (_fxd / (float)(1 << _f));
}
int	Fixed::toInt(void) const 
{
	return (_fxd >> _f);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}
