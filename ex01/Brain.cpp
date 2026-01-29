/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:06:34 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/29 14:13:19 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	for (std::size_t i = 0 ; i < 100 ; ++i)
		this->ideas[i] = cpy.ideas[i];
	std::cout << "Brain copied" << std::endl;
}

Brain& Brain::operator=(const Brain& cpy)
{
	if (this != &cpy)
	{
		for (std::size_t i = 0 ; i < 100 ; ++i)
			this->ideas[i] = cpy.ideas[i];
	}
	std::cout << "Brain copied (via assignment operator)" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
