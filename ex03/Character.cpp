/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:54:16 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/05 12:36:45 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria*	Character::g_floor[100] = {0};

Character::Character() : m_name("Unnamed")
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    m_equipment[i] = 0;
	}
}

Character::Character(const std::string& name) : m_name(name)
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    m_equipment[i] = 0;
	}
}

Character::Character(const Character& cpy) : m_name(cpy.m_name)
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (cpy.m_equipment[i])
			m_equipment[i] = cpy.m_equipment[i]->clone();
		else
			m_equipment[i] = 0;
	}
}

Character&	Character::operator=(const Character& cpy)
{
	if (this != &cpy)
	{
		m_name = cpy.m_name;
		for (int i = 0 ; i < 4 ; ++i)
		{
			if (m_equipment[i])
				delete m_equipment[i];
			if (cpy.m_equipment[i])
				m_equipment[i] = cpy.m_equipment[i]->clone();
			else
				m_equipment[i] = 0;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (m_equipment[i])
			delete m_equipment[i];
	}
}

const std::string&	Character::getName() const
{
	return (m_name);
}

void	Character::throwFloor(AMateria* m)
{
	int i = 0;
	for ( ; i < 100 ; ++i)
	{
		if (g_floor[i] == 0)
			break ;
	}
	if (i < 100)
	{
		g_floor[i] = m;
	}
	else
	{
		wipeFloor();
		g_floor[0] = m;
	}
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0 ; i < 4 ; ++i)
	{
		if (!m_equipment[i])
		{
			m_equipment[i] = m;
			return ;
		}
	}
	throwFloor(m);
}


void	Character::wipeFloor()
{
	std::cout << "clean inventory to make more space" << std::endl;
	for (int i = 0 ; i < 100 ; ++i)
	{
		if (g_floor[i])
			delete g_floor[i];
		g_floor[i] = 0;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || m_equipment[idx] == 0)
		return ;

	throwFloor(m_equipment[idx]);
	m_equipment[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (m_equipment[idx])
	{
		m_equipment[idx]->use(target);
		return ;
	}
	std::cout << "nothing to use" << std::endl;
}

AMateria*	Character::getFromFloor(int idx)
{
	if (idx < 0 || idx > 99 || g_floor[idx] == 0)
		return (0);
	AMateria* tmp = g_floor[idx];
	g_floor[idx] = 0;
	return (tmp);
}
