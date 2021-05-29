//
// Created by Shantay Budding on 4/20/21.
//

#ifndef EX03_ICHARACTER_HPP
#define EX03_ICHARACTER_HPP

#include "AMateria.hpp"
class ICharacter;
class AMateria;
#include <string>

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //EX03_ICHARACTER_HPP
