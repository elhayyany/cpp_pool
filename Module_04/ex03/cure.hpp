/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:36:34 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/22 11:17:50 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef cure_HPP
#define cure_HPP
#include "AMateria.hpp"

class cure : public AMateria
{
private:
    /* data */
public:
    cure(/* args */);
    cure(cure&);
    cure& operator= (cure&);
    void use(ICharacter& target);
    AMateria* clone() const;
    ~cure();
};
#endif