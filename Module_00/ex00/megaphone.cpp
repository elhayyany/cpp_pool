/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:11:51 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/12 02:11:54 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char const **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t a = 0; argv[i][a] ; a++)
			std::cout << (char)std::toupper(argv[i][a]);
	}
	std::cout << std::endl;
	return (0);
}
