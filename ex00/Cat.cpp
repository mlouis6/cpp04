/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:04:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 15:17:48 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	m_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
	{
		Animal::operator=(cpy);
	}
	std::cout << "Cat copy operator" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destuctor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}
