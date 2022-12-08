/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:38:03 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/09/01 13:42:03 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <string>
class Span
{
private:
	std::vector<int>	_span;
	unsigned	int		_N;
public:

	Span();
	Span(unsigned int n);
	Span(int n);
	Span(const Span& sp);
	Span& operator = (Span & sp);
	void    addNumber(int   a);
	unsigned int     size() const;
	unsigned int     capacity()const;
	template<typename T>	
	void addNumbers(T begin,  T end) 
	{
		while(begin != end)
		{
        std::cout<<_span.size()<<"  "<<_N<< "  "<<*begin<<std::endl;
			addNumber(*begin);
			begin++;
		}
	}
	int     shortestSpan();
	int     longestSpan();
	int     numAtDex(int i) const ;
	~Span();
};


#endif