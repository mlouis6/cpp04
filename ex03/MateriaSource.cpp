/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:11:11 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 10:20:31 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	
}

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
	static_cast<void>(cpy);
}

MateriaSource& MateriaSource::operator=(MateriaSource const & cpy)
{
	static_cast<void>(cpy);
	return (*this);
}

MateriaSource::~MateriaSource()
{

}

void    MateriaSource::learnMateria(AMateria* materia)
{
	static_cast<void>(materia);
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	if (type == "cure")
		return (new Cure());
	return (0);
}
