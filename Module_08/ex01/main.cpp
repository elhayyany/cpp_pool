/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:37:58 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/31 19:03:09 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp =  Span(10);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout<<std::endl<<std::endl<<"---_____-----______----_______-----______------______--____------___-___-_-_-______----____-----____-"<<std::endl<<std::endl;
    std::vector<int> l;
    for (size_t i = 0; i < 5; i++)
    {
        std::srand(time(0));
        l.push_back(i);
    }
    Span spn(10);
    spn.addNumbers(l.begin(), l.end());
    return 0;
}


// Adjective2022