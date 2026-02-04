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
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    m_materias[i] = 0;
	}
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (cpy.m_materias[i])
			m_materias[i] = cpy.m_materias[i]->clone();
		else
			m_materias[i] = 0;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& cpy)
{
	if (this != &cpy)
	{
		for (int i = 0 ; i < 4 ; ++i)
		{
			if (m_materias[i])
				delete m_materias[i];
			if (cpy.m_materias[i])
				m_materias[i] = cpy.m_materias[i]->clone();
			else
				m_materias[i] = 0;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (m_materias[i])
	    	delete m_materias[i];
	}
}

void    MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (m_materias[i] == 0)
		{
			m_materias[i] = materia->clone();
			delete materia;
			return ;
		}
	}
	delete materia;
}

AMateria*   MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (m_materias[i] && m_materias[i]->getType() == type)
		{
			return (m_materias[i]->clone());
		}
	}
	std::cout << "Unknown materia" << std::endl;
	return (0);
}
