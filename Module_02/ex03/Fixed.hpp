/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:02:00 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/17 13:55:33 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
	int					_fxd;
	const static int	_f = 8;
public:
	Fixed();
	Fixed(const Fixed& f);
	Fixed(const int num);
	Fixed(const float num);
	Fixed&					operator=(const Fixed& f);
	Fixed&					operator++();
	Fixed&					operator--();
	Fixed					operator++(int);
	Fixed					operator--(int);
	bool					operator>(const Fixed& f);
	bool					operator<(const Fixed& f);
	bool					operator<=(const Fixed& f);
	bool					operator>=(const Fixed& f);
	bool					operator==(const Fixed& f);
	bool					operator!=(const Fixed& f);
	Fixed					operator-(const Fixed& f);
	Fixed					operator+(const Fixed& f);
	Fixed					operator*(const Fixed& f);
	Fixed					operator/(const Fixed& f);
	static Fixed&			max(Fixed& f, Fixed& s);
	static Fixed&			min(Fixed& f, Fixed& s);
	const  Fixed&			abs(const Fixed& f);
	const static Fixed&		max(const Fixed& f, const Fixed& s);
	const static Fixed&		min(const Fixed& f, const Fixed& s);
	int						getRawBits( void ) const;
	void					setRawBits( int const raw );
	float					toFloat(void) const;
	int						toInt(void) const;
	void					set_float(float a);
	~Fixed();
};

std::ostream &operator<<(std::ostream& , const Fixed &f);

#endif

