#include "Character.hpp"
#include "AMateria.hpp"
#include <string>

#include <iostream>

Character::Character(std::string name) : m_name(name)
{
    for (int i = 0 ; i < 4 ; ++i)
    {
        m_inventory[i] = 0;
    }
}

Character::Character(Character const & cpy)
{
    for (int i = 0 ; i < 4 ; ++i)
        m_inventory[i] = cpy.m_inventory[i];
    // this->m_inventory = new AMateria(*cpy.m_inventory);
}

Character& Character::operator=(Character const & cpy)
{
    static_cast<void>(cpy);
    // if (this != &cpy)
    // {
    //     this->m_inventory = new AMateria(*cpy.m_inventory);
    // }
    return (*this);
}

Character::~Character()
{

}

std::string const & Character::getName() const
{
    return (m_name);
}

void Character::equip(AMateria* m)
{
    int i = 0;
    for ( ; i < 4 ; ++i)
    {
        if (m_inventory[i] == 0)
            break ;
    }
    if (i < 4)
        m_inventory[i] = m;

}

void Character::unequip(int idx)
{
    m_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (m_inventory[idx] != 0)
        m_inventory[idx]->use(target);
}
