/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:18:42 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/29 13:57:38 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hpp.hpp"

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout<<"the actual type of the object pointed to by p is A"<<std::endl;
    if (dynamic_cast<B *>(p))
        std::cout<<"the actual type of the object pointed to by p is B"<<std::endl;
    if (dynamic_cast<C *>(p))
        std::cout<<"the actual type of the object pointed to by p is C"<<std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout<<"the actual type of the object pointed to by p is A"<<std::endl;
        (void)a;
    }
    catch(const std::bad_cast)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout<<"the actual type of the object pointed to by p is B"<<std::endl;
            (void)b;
        }
        catch(const std::bad_cast)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout<<"the actual type of the object pointed to by p is C"<<std::endl;
                (void)c;
            }
            catch(const std::bad_cast)
            {
            }
        }
    }
}
