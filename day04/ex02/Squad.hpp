//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class Squad : public ISquad
{
private:
	ISpaceMarine	**_squad;
	int 			_cnt;

public:
	Squad();
	Squad(Squad &);
	Squad &operator=(Squad &);
	virtual ~Squad();

	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);
};


#endif //EX02_SQUAD_HPP
