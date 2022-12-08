/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:07:36 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/02 16:22:15 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout<<"error"<<std::endl;
		return (0);
	}
	Harl	*hr;

	hr = new Harl;
	hr->complain(av[1]);
	delete hr;
	return (0);
}