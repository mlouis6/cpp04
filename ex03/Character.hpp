#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
#include "AMateria.hpp"
# include <string>

class Character : public ICharacter
{
    public:
        Character(std::string name);
        Character(Character const & cpy);
        ~Character();
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string m_name;
        AMateria*   m_inventory[4];
        Character& operator=(Character const & cpy);
};

#endif