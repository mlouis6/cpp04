/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:52:53 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 12:58:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	m_type = "Unknown";
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& cpy)
{
	this->m_type = cpy.m_type;
	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& cpy)
{
	if (this != &cpy)
	{
		this->m_type = cpy.m_type;
	}
	std::cout << "AAnimal copy operator" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destuctor" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	AAnimal::getType() const
{
	return (m_type);
}
