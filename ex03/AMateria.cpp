/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:25 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/02 09:44:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : m_type(type)
{

}

AMateria::AMateria(AMateria const & cpy)
{
    m_type = cpy.m_type;
}

AMateria&	AMateria::operator=(AMateria const & cpy)
{
    if (this != &cpy)
        m_type = cpy.m_type;
    return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
    return (m_type);
}
