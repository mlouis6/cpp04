/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:54:10 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/04 14:06:42 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{

}

Cure&	Cure::operator=(const Cure& cpy)
{
	static_cast<void>(cpy);
	return (*this);
}

Cure::~Cure()
{

}

Cure*	Cure::clone() const
{
    return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
