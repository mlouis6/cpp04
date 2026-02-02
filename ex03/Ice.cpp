#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria()
{
    m_type = "ice";
}

Ice::Ice(Ice const & cpy)
{
    static_cast<void>(cpy);
}

Ice& Ice::operator=(Ice const & cpy)
{
    static_cast<void>(cpy);
    return (*this);
}

Ice::~Ice()
{

}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
