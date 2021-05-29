//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:


public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &);
	TacticalMarine &operator=(TacticalMarine &);
	virtual ~TacticalMarine();

	ISpaceMarine* 	clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
