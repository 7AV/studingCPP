//
// Created by Shantay Budding on 4/21/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_lib[4];
	int 		_cnt;

public:
	MateriaSource();
	MateriaSource(MateriaSource &);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource &);

	AMateria* getMateria(int) const;
	int getCnt() const;
	void learnMateria(AMateria *);
	AMateria* createMateria(std::string const & type);
};

std::ostream &operator<<(std::ostream &o, MateriaSource &rhs);

#endif //EX03_MATERIASOURCE_HPP
