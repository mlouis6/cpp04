/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:52:53 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 12:58:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	m_type = "Unknown";
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	this->m_type = cpy.m_type;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& cpy)
{
	if (this != &cpy)
	{
		this->m_type = cpy.m_type;
	}
	std::cout << "Animal copy operator" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destuctor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType() const
{
	return (m_type);
}
