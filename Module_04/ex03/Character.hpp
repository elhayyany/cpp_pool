/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:38:45 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:49:50 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class AMateria;
class Character : public ICharacter
{
private:
    AMateria** materias;
    AMateria** materias_foundeed;
    int         nub_m_f;
    std::string _name;
    AMateria** deletmateria(AMateria**  materia);
public:
    Character(/* args */);
    Character(const std::string&);
    Character(Character&);
    std::string get_name();
    void    set_name(std::string );
    Character& operator=(Character&);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};
#endif