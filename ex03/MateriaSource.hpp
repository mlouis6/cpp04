#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource& const cpy);
        MateriaSource& operator=(MateriaSource& const cpy);
        ~MateriaSource();

};

#endif