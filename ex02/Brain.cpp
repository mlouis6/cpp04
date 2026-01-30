/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 13:06:34 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/30 11:46:27 by mlouis           ###   ########.fr       */
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
	for (int i = 0 ; i < g_max_ideas ; ++i)
		this->m_ideas[i] = cpy.m_ideas[i];
	std::cout << "Brain copied" << std::endl;
}

Brain& Brain::operator=(const Brain& cpy)
{
	if (this != &cpy)
	{
		for (int i = 0 ; i < g_max_ideas ; ++i)
			this->m_ideas[i] = cpy.m_ideas[i];
	}
	std::cout << "Brain copied (via assignment operator)" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

void	Brain::addIdea(const std::string& idea)
{
	int	i = 0;
	while (!m_ideas[i].empty())
	{
		++i;
	}
	if (i < g_max_ideas)
	{
		m_ideas[i] = idea;
	}
	else
		std::cout << "No place left in brain" << std::endl;
}

int		Brain::getMaxIdeas() const
{
	return (g_max_ideas);
}

std::string	Brain::getIdea(int index) const
{
	return (m_ideas[index]);
}

std::ostream& operator<<(std::ostream& os, const Brain& b)
{
	for (int i = 0 ; i < b.getMaxIdeas() && !b.getIdea(i).empty() ; ++i)
	{
		os << "Idea " << i + 1 << ": " << b.getIdea(i) << std::endl;
	}
	return (os);
}
