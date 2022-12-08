/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:01:54 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/17 16:09:15 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	_fxd = 0;
}

Fixed::Fixed(const Fixed& f) 
{
	_fxd = f._fxd;
}
Fixed::Fixed(const int num)
{
	_fxd = num << _f;
}
Fixed::Fixed(const float num)
{
	_fxd = roundf(num  * 256);
}
Fixed& Fixed::operator=(const Fixed& f)
{
    _fxd = f._fxd;
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits( void ) const
{
	return (_fxd);
}

void Fixed::setRawBits( int const raw )
{
	_fxd = raw;
}
float	Fixed::toFloat(void) const
{
	return ((float)_fxd / (float)256);
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

bool	Fixed::operator>(const Fixed& f)
{
	return(_fxd > f._fxd);
}
bool	Fixed::operator<(const Fixed& f)
{
	return(_fxd < f._fxd);
}
bool	Fixed::operator<=(const Fixed& f)
{
	return(_fxd <= f._fxd);
}
bool	Fixed::operator>=(const Fixed& f)
{
	return(_fxd >= f._fxd);
}
bool	Fixed::operator==(const Fixed& f)
{
	return(_fxd == f._fxd);
}
bool	Fixed::operator!=(const Fixed& f)
{
	return(_fxd != f._fxd);
}

Fixed	Fixed::operator+(const Fixed& f)
{
	Fixed tem;
	tem.setRawBits(this->getRawBits() + f.getRawBits());
	return (tem);
}
Fixed	Fixed::operator-(const Fixed& f)
{
	Fixed tem;
	tem.setRawBits(this->getRawBits() - f.getRawBits());
	return (tem);
}
Fixed	Fixed::operator*(const Fixed& f)
{
	Fixed tem;
	tem.setRawBits(roundf(this->getRawBits() * f.getRawBits() / 256));
	return (tem);
}
Fixed	Fixed::operator/(const Fixed& f)
{
	Fixed tem;
	tem.setRawBits(roundf(this->getRawBits() * 256 / f.getRawBits()));
	return (tem);
}

Fixed&	Fixed::operator++()
{
	this->_fxd += 1 ;
	return (*this);
}
Fixed&	Fixed::operator--()
{
	this->_fxd -= 1 ;
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed tem = *this;
	this->_fxd += 1 ;
	return (tem);
}
Fixed	Fixed::operator--(int)
{
	Fixed tem = *this;
	this->_fxd -= 1 ;
	return (tem);
}


Fixed&	Fixed::max(Fixed& f, Fixed& s)
{
	return((f._fxd > s._fxd) ? f : s);
}
const Fixed&	Fixed::max(const Fixed& f, const Fixed& s)
{
	return((f._fxd > s._fxd) ? f : s);
}
Fixed&	Fixed::min(Fixed& f, Fixed& s)
{
	return((f._fxd < s._fxd) ? f : s);
}
const Fixed&	Fixed::min(const Fixed& f, const Fixed& s)
{
	return((f._fxd < s._fxd) ? f : s);
}
