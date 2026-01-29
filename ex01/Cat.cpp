/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:04:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 13:24:44 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	m_type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy)
{
	this->brain = new Brain(*cpy.brain); 
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
	{
		Animal::operator=(cpy);
		delete this->brain;
		this->brain = new Brain(*cpy.brain); 
	}
	std::cout << "Cat copy operator" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destuctor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "*meow*" << std::endl;
}
