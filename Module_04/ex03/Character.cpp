/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:38:43 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/26 10:49:00 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
    _name = "default";
    materias_foundeed = 0;
    nub_m_f = 0;
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
    
}
Character::Character(const std::string& name)
{
    _name = name;
    materias_foundeed = 0;
    nub_m_f = 0;
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
}
Character::Character(Character& chrt)
{
    if (materias)
        delete materias;
    materias_foundeed = 0;
    nub_m_f = 0;
    _name = chrt.get_name();
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
    {
        if (chrt.materias[i])
            materias[i] = chrt.materias[i]->clone();
        else
            materias[i] = 0;
    }
    
}
std::string Character::get_name()
{
    return (_name);
}
void Character::set_name(std::string name)
{
    _name = name;
}
Character& Character::operator=(Character& chrt)
{
    if (!nub_m_f)
    {
        materias_foundeed = 0;
    }
    nub_m_f = 0;
    _name = chrt.get_name();   
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
    {
        if (chrt.materias[i])
            materias[i] = chrt.materias[i]->clone();
        else
            materias[i] = 0;
    }
    return (*this);
}
std::string const & Character::getName() const
{
    return (_name);
}
void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = m;
            break ;
        }
    }
}
AMateria** Character::deletmateria(AMateria**  materia)
{
    AMateria** mat = 0;
    if (materia)
    {
            mat = new AMateria*[nub_m_f + 1];
            for (int i = 0; i < nub_m_f ; i++)
            {
                mat[i] = materia[i];
            }
            delete [] materia;
            nub_m_f++;
            return (mat);
    }
    mat = new AMateria*[nub_m_f + 1];
    nub_m_f++;
    return (mat);
}
void Character::unequip(int idx)
{
    if (0 <= idx  && idx < 4 )
        if(materias[idx])
        {
            materias_foundeed = deletmateria(materias_foundeed);
            materias_foundeed[nub_m_f] = materias[idx];
            materias[idx] = 0;
        }
}

void Character::use(int idx, ICharacter& target)
{
    if (0 <= idx  && idx < 4 )
        if(materias[idx])
            materias[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < nub_m_f; i++)
        delete materias_foundeed[i];
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
    delete [] materias_foundeed;
    delete [] materias;
}