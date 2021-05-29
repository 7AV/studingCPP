//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string			_name;
	int 				_AP;
	AWeapon				*_wep;
	Character();

public:
	Character(std::string const & name);
	Character(Character &);
	Character &operator=(Character const &);
	~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	virtual std::string getName() const;
	int 				getAP();
	AWeapon				*getWep();
};

std::ostream &operator<<(std::ostream &o, Character &rhs);

#endif //EX01_CHARACTER_HPP
