//
// Created by Shantay Budding on 4/20/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
private:
	std::string			_name;

public:
	Ice();
	Ice(Ice &);
	virtual ~Ice();

	Ice			&operator=(Ice const &);

	virtual AMateria*	clone() const;
	virtual void 		use(ICharacter& target);
};


#endif //EX03_ICE_HPP
