#include "Character.hpp"

Character::Character()
{

}

Character::Character(Character& const cpy)
{
    this->m_inventory = new AMateria(*cpy.m_inventory);
}

Character& Character::operator=(Character& const cpy)
{
    if (this != &cpy)
    {
        this->m_inventory = new AMateria(*cpy.m_inventory);
    }
    return (*this);
}

Character::~Character()
{

}

std::string& const Character::getName() const
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
    else
        ; // TODO: add to graveyard
}

void Character::unequip(int idx)
{
    m_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    m_inventory[idx].use(target);
}
