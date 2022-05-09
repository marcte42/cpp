#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &src);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &rhs);

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);

private:
    AMateria *_inventory[4];
};

#endif