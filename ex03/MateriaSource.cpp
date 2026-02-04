/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:11:11 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/04 13:58:47 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    m_materias[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	static_cast<void>(cpy);
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& cpy)
{
	static_cast<void>(cpy);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    delete m_materias[i];
	}
}

void    MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	for ( ; i < 4 ; ++i)
	{
		if (m_materias[i] == 0)
		{
			m_materias[i] = materia;
			break ;
		}
	}
}

AMateria*   MateriaSource::createMateria(const std::string& type)
{
	int i = 0;
	for ( ; i < 4 ; ++i)
	{
		if (m_materias[i] != 0 && m_materias[i]->getType() == type)
			return (m_materias[i]->clone());
	}
	return (0);
}
