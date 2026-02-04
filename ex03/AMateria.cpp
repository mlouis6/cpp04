/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:55:25 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/04 14:05:45 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : m_type("default")
{

}

AMateria::AMateria(const std::string& type) : m_type(type)
{

}

AMateria::AMateria(const AMateria& cpy)
{
	static_cast<void>(cpy);
	// m_type = cpy.m_type;
}

AMateria&	AMateria::operator=(const AMateria& cpy)
{
	static_cast<void>(cpy);
	return (*this);
}

const std::string&	AMateria::getType() const
{
	return (m_type);
}
