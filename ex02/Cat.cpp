/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:04:13 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 15:50:14 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal()
{
	m_type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& cpy) : AAnimal(cpy)
{
	this->brain = new Brain(*cpy.brain); 
	std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
	if (this != &cpy)
	{
		AAnimal::operator=(cpy);
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

Brain& Cat::getBrain() const
{
	return (*brain);
}
