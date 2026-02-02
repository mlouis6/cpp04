#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria()
{
    m_type = "cure";
}

Cure::Cure(Cure const & cpy)
{
    static_cast<void>(cpy);
}

Cure& Cure::operator=(Cure const & cpy)
{
    static_cast<void>(cpy);
    return (*this);
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
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
