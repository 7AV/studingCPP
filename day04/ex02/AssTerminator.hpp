//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX02_ASSTERMINATOR_HPP
#define EX02_ASSTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssTerminator : public ISpaceMarine
{
private:


public:
	AssTerminator();
	AssTerminator(AssTerminator const &);
	AssTerminator &operator=(AssTerminator &);
	virtual ~AssTerminator();

	ISpaceMarine* 	clone() const;
	void 			battleCry() const;
	void 			rangedAttack() const;
	void 			meleeAttack() const;
};


#endif //EX02_ASSTERMINATOR_HPP
