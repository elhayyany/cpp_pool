/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 19:02:05 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/15 13:26:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

#include <iostream>
int main( void )
{
	Fixed a;
	Fixed c(7.5f);
	a * c;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d(6.25f);
	std::cout <<"a  : "<< a << std::endl;
	std::cout <<"++a: "<< ++a << std::endl;
	std::cout <<"a  : "<< a << std::endl;
	std::cout <<"a++: "<< a++ << std::endl;
	std::cout <<"a  : "<< a << std::endl;
	std::cout <<"b  : "<< b  <<" .. "<<5.05 * 2<< std::endl;
	std::cout<<"d * c = " << d * c <<" .. "<<6.25 * 7.5<<std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return(0);
}
