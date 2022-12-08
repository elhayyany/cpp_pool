/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:02:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 11:06:27 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main()
{
    std::vector<int> dsg;// = {1,2,3,4,5,6,7,8,9,9,8,7,6,5,4};
    std::vector<int>::iterator p;
    for (size_t i = 0; i < 20; i++)
    {
        dsg.push_back(i);
    }
    try
    {
        p =  easyfind(dsg, 5);
        std::cout<<*p<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    try
    {
        p =  easyfind(dsg, 8888);
        std::cout<<*p<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::stack<int> st;
    for (size_t i = 0; i < 50; i +=2)
    {
        st.push(i);
    }
    std::vector<int>::const_iterator it;
    std::vector<int> const vec = dsg;
    try
    {
        it = easyfind(vec, 6);
        std::cout<<*it<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        it = easyfind(vec, 600);
        std::cout<<*it<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}