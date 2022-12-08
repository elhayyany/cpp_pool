/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:38:01 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/31 19:03:20 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(/* args */): _N(0)
{
}

Span::~Span()
{
}
Span::Span(unsigned int n): _N(n)
{
}
Span::Span(int n): _N(n)
{
}
Span::Span(const Span& sp)
{
    _N =   sp.capacity();
    for (unsigned int i = 0; i < sp.size(); i++)
    {
        _span[i] = sp.numAtDex(i);
    }
}

int    Span::numAtDex(int i)const
{
    return (_span[i]);
}

Span& Span::operator = (Span & sp)
{
    _N = sp.capacity();
    for (unsigned int i = 0; i < sp.size(); i++)
    {
        _span[i] = sp.numAtDex(i);
    }
    return (*this);
}
void    Span::addNumber(int   a)
{
    try
    {
        if (_span.size() == _N)
            throw(a);
        _span.push_back(a);
    }
    catch(int a)
    {
        std::cerr << "no space left" << '\n';
    }
    
}

int     Span::shortestSpan()
{
    int sm;

    sm = 0;
    if (_span.size() < 2)
        throw std::invalid_argument("you need at least two arguments");
    std::sort(_span.begin(), _span.end());
    std::vector<int>::iterator it = _span.begin();
    std::vector<int>::iterator t = _span.begin();
    t = it;
    sm = *(++t) - *it;
    for (it = _span.begin(); it != _span.end(); it++)
    {
        t = it;
        if (++t != _span.end())
        {
            if ((*(t) - *it) < sm)
            {
                t = it;
                sm = *(++t) - *it;
            }
        }
    }
    return (sm);
}

int     Span::longestSpan()
{
    if (_span.size() < 2)
        throw std::invalid_argument("you need at least two arguments");
    return (*(std::max_element(_span.begin(), _span.end())) - *(std::min_element(_span.begin(), _span.end())));
}

unsigned int     Span::size() const
{
    return (_span.size());
}

unsigned int     Span::capacity() const
{
    return (_N);
}