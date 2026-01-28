/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:20:59 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 15:25:47 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	m_type = "default";
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	this->m_type = cpy.m_type;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpy)
{
	if (this != &cpy)
	{
		this->m_type = cpy.m_type;
	}
	std::cout << "WrongAnimal copy operator" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destuctor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*generic WrongAnimal sound*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (m_type);
}
