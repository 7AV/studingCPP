//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX01_DEATHCLAW_HPP
#define EX01_DEATHCLAW_HPP

#include "Enemy.hpp"

class Deathclaw : public Enemy
{
public:
	Deathclaw();
	Deathclaw(Deathclaw &);
	Deathclaw &operator=(Deathclaw const &);
	virtual ~Deathclaw();

	void 	takeDamage(int);
};


#endif //EX01_DEATHCLAW_HPP
