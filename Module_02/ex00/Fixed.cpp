/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:56:18 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/16 13:39:02 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


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

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (_fxd);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	_fxd = raw;
}
