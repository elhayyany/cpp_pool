/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:45:02 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/07 16:34:46 by ael-hayy         ###   ########.fr       */
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
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif