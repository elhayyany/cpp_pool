/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:56:20 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/25 17:59:20 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H__
#define BRAIN_H__
#include <iostream>
class Brain
{
private:
    /* data */
public:
    std::string ideas[100];
    Brain(/* args */);
    Brain(const Brain & str);
    Brain& operator=(const Brain & str);
    ~Brain();
};

#endif