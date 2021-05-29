//
// Created by Shantay Budding on 4/20/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
class AMateria;
class ICharacter;

class AMateria
{
protected:
	std::string const	_type;
	unsigned int 		_xp;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &);
	virtual ~AMateria();

	AMateria			&operator=(AMateria const &);

	std::string const	&getType() const;
	unsigned int 		getXP() const;
	virtual AMateria*	clone() const = 0;
	virtual void 		use(ICharacter& target);
};


#endif //EX03_AMATERIA_HPP
