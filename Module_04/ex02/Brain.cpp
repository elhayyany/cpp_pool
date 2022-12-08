/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:56:17 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 11:17:58 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout<<"BREAIN Constractor" << std::endl;
}

Brain::~Brain()
{
    std::cout<<"BREAIN DeConstractor" << std::endl;
}

Brain::Brain(const Brain & str)
{
    std::cout<<"BREAIN COPonstractor" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = str.ideas[i];
}
Brain& Brain::operator=(const Brain & str)
{
    std::cout<<"BREAIN assingment constructer" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = str.ideas[i];
    return (*this);
}