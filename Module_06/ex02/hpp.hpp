/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hpp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:02:28 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/07/31 19:02:18 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_H__
#define HPP_H__

#include "C.hpp"
#include "A.hpp"
#include "B.hpp"
#include <cstdlib>
#include <iostream>
Base * generate(void);
void identify(Base& p);
void identify(Base* p);
#endif