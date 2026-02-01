/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:25 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 15:55:30 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string& const type) : m_type(type)
{

}

AMateria::AMateria(AMateria& const cpy)
{

}

AMateria&	AMateria::operator=(AMateria& const cpy)
{

}

AMateria::~AMateria()
{

}

std::string& const AMateria::getType() const
{
    return (m_type);
}
