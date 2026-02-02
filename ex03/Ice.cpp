/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:54:05 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 10:54:06 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria()
{
	m_type = "ice";
}

Ice::Ice(const Ice& cpy)
{
	static_cast<void>(cpy);
}

Ice&	Ice::operator=(const Ice& cpy)
{
	static_cast<void>(cpy);
	return (*this);
}

Ice::~Ice()
{

}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
