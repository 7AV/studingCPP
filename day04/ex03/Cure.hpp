//
// Created by Shantay Budding on 4/20/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	std::string			_name;

public:
	Cure();
//	Cure(std::string const & type);
	Cure(Cure &);
	virtual ~Cure();

	Cure			&operator=(Cure const &);

	virtual AMateria*	clone() const;
	virtual void 		use(ICharacter& target);
};

#endif //EX03_CURE_HPP
