//
// Created by Shantay Budding on 4/19/21.
//

#include "Character.hpp"

Character::Character()
{

}

Character::Character(const std::string &name) : _name(name)
{
	this->_AP = 40;
	this->_wep = 0;
}

Character::Character(Character &src)
{
	*this = src;
}

Character &Character::operator=(Character const &rhs)
{
	this->_AP = rhs._AP;
	this->_wep = rhs._wep;
	this->_name = rhs._name;
	return (*this);
}

Character::~Character()
{
	return;
}

void 	Character::recoverAP()
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void 	Character::equip(AWeapon *src)
{
	this->_wep = src;
}

void 	Character::attack(Enemy *src)
{
	if ((!src))
		std::cout << this->_name << " attack failed. No enemy." <<
				  std::endl;
	else if (!this->getWep())
		std::cout << this->_name << " attack failed. Unarmed." <<
		std::endl;
	else if (this->_AP >= this->_wep->getAPCost())
	{
		std::cout << this->_name << " attacks " << src->getType() <<
				  " with a " << this->_wep->getName() << "." << std::endl;
		this->_wep->attack();
		this->_AP -= this->_wep->getAPCost();
		src->takeDamage(this->_wep->getDamage());
		if (src->getHP() == 0)
			delete src;
	}
	else
		std::cout << this->_name <<
		" attack failed, not enough AP. Current AP: " <<
		this->_AP << std::endl;
}

std::string 	Character::getName() const
{
	return (this->_name);
}

int 	Character::getAP()
{
	return (this->_AP);
}

AWeapon		*Character::getWep()
{
	return (this->_wep);
}

std::ostream 	&operator<<(std::ostream &o, Character &rhs)
{
	if (rhs.getWep())
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " <<
		  rhs.getWep()->getName() << "." << std::endl;
	}
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed."
		<< std::endl;
	return o;
}