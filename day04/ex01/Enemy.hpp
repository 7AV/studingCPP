//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
protected:
	int 			_hp;
	std::string 	_type;
	Enemy();

public:
	Enemy(int hp, std::string const &type);
	Enemy( Enemy &src );
	Enemy &operator=( Enemy const & );
	virtual ~Enemy();

	virtual std::string		getType() const;
	int 					getHP() const;
	virtual void 			takeDamage(int);
};


#endif //EX01_ENEMY_HPP
