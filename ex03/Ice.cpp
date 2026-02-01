#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
    m_type = "ice";
}

Ice::Ice(Ice& const cpy)
{

}

Ice& Ice::operator=(Ice& const cpy)
{

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
    std::cout << "* shoots an ice bolt at " << target << " *" << std:endl;
}
