//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant &);
	SuperMutant &operator=(SuperMutant const &);
	virtual ~SuperMutant();

	void 	takeDamage(int);
};


#endif //EX01_SUPERMUTANT_HPP
