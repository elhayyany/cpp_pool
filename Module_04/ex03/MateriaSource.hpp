/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:40:32 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/23 13:06:15 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "ice.hpp"
#include "cure.hpp"
// class Amateria;
// class IMateriaSource;
class MateriaSource : public IMateriaSource
{
private:
	AMateria** materias;
public:
	MateriaSource();
	MateriaSource(MateriaSource&);
	MateriaSource&	operator=(MateriaSource&);
	void            learnMateria(AMateria*);
	AMateria*       createMateria(std::string const & type);
	~MateriaSource();
};
#endif