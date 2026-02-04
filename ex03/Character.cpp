/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:54:16 by mlouis            #+#    #+#             */
/*   Updated: 2026/02/04 14:01:50 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <string>


Character::Character() : m_name("Unnamed")
{

}

Character::Character(const std::string& name) : m_name(name)
{
	for (int i = 0 ; i < 4 ; ++i)
	{
	    m_equipment[i] = 0;
	}
	for (int i = 0 ; i < 100 ; ++i)
	{
	    m_inventory[i] = 0;
	}
}

Character::Character(const Character& cpy)
{
	for (int i = 0 ; i < 4 ; ++i)
		m_equipment[i] = cpy.m_equipment[i];
	// this->m_equipment = new AMateria(*cpy.m_equipment);
}

Character&	Character::operator=(const Character& cpy)
{
	if (this != &cpy)
	{
		for (int i = 0 ; i < 4 ; ++i)
			m_equipment[i] = cpy.m_equipment[i];
	    // this->m_equipment = new AMateria(*cpy.m_equipment);
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; ++i)
		delete m_equipment[i];
	for (int i = 0 ; i < 100 ; ++i)
		delete m_inventory[i];
}

const std::string&	Character::getName() const
{
	return (m_name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	for ( ; i < 4 ; ++i)
	{
		if (m_equipment[i] == 0)
			break ;
	}
	if (i < 4)
		m_equipment[i] = m;
}

void	Character::wipeInventory()
{
	for (int i = 0 ; i < 100 ; ++i)
	{
		delete m_inventory[i];
		m_inventory[i] = 0;
	}
	
}

void	Character::unequip(int idx)
{
	if (m_equipment[idx] == 0)
		return ;

	int i = 0;
	for ( ; i < 100 ; ++i)
	{
		if (m_inventory[i] == 0)
			break ;
	}
	if (i < 100)
	{
		m_inventory[i] = m_equipment[idx];
	}
	else
	{
		wipeInventory();
		m_inventory[0] = m_equipment[idx];
	}
	m_equipment[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (m_equipment[idx] != 0)
		m_equipment[idx]->use(target);
}
