#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &src);
    ~Cure();
    Cure &operator=(const Cure &rhs);

    AMateria *clone() const;
    void use(ICharacter &target);

private:
};

#endif