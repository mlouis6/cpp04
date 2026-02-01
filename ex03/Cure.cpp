#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
    m_type = "cure";
}

Cure::Cure(Cure& const cpy)
{

}

Cure& Cure::operator=(Cure& const cpy)
{

}

Cure::~Cure()
{

}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
