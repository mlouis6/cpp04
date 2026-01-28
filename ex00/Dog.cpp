/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:58:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 15:16:11 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	m_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& cpy)
{
	if (this != &cpy)
	{
		Animal::operator=(cpy);
	}
	std::cout << "Dog copy operator" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destuctor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "*woof*" << std::endl;
}
