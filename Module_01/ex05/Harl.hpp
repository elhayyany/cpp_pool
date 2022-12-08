/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:24:29 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/02 14:54:12 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl();
	void complain( std::string level );
	~Harl();
};

