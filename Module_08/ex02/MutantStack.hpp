/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:25:22 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/31 19:54:03 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <deque>
#include <stack>

#include <iostream>
template <class T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack(/* args */);
    MutantStack(MutantStack&t);
    MutantStack& operator=(MutantStack&t);
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    iterator    begin();
    iterator    end();
    const_iterator    cbegin();
    const_iterator    cend();
    reverse_iterator    rbegin();
    reverse_iterator    rend();
    const_reverse_iterator    crbegin();
    const_reverse_iterator    crend();
    ~MutantStack();
};

#include "MutantStack.tpp"


#endif