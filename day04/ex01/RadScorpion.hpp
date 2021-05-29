//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion &);
	RadScorpion &operator=(RadScorpion const &);
	virtual ~RadScorpion();

};


#endif //EX01_RADSCORPION_HPP
