/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 12:59:16 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
// #include "ice.hpp"
#include "cure.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif