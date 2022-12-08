/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:54:57 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/09 11:43:43 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int					_fxd;
	const static int	_f = 8;
public:
	Fixed();
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream& , const Fixed &f);

#endif

