/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:58:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 13:21:37 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	m_type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	this->brain = new Brain(*cpy.brain); 
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& cpy)
{
	if (this != &cpy)
	{
		Animal::operator=(cpy);
		this->brain = new Brain(*cpy.brain); 
	}
	std::cout << "Dog copy operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destuctor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "*woof*" << std::endl;
}
