/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:40:29 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 19:21:38 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

void        MateriaSource::learnMateria(AMateria* mat)
{
    for (int i = 0; i < 4; i++)
        if (!materias[i])
		{
            materias[i] = mat->clone();
			break;
		}
    
}
AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == type)
            return(materias[i]->clone());
    return (0);
}

MateriaSource::MateriaSource()
{
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
    
}
MateriaSource::MateriaSource(MateriaSource& src)
{
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
    {
        if (src.materias[i])
            materias[i] = src.materias[i]->clone();
        else
            materias[i] = 0;
    }
}
MateriaSource&	MateriaSource::operator=(MateriaSource& scr)
{
	if (materias)
	{
		for(int i = 0; i < 4; i ++)
		if (materias[i])
			delete materias[i];
		delete [] materias;
	}
    materias = new AMateria*[4];
    for (int i = 0; i < 4; i++)
    {
        if (scr.materias[i])
            materias[i] = scr.materias[i]->clone();
        else
            materias[i] = 0;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i ++)
        if (materias[i])
            delete materias[i];
    delete [] materias;
}