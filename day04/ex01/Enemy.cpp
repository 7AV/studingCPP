//
// Created by Shantay Budding on 4/18/21.
//

#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return;
}

Enemy::Enemy(int hp, const std::string &type)
	: _hp(hp), _type(type)
{
	return;
}

Enemy::Enemy( Enemy &src )
{
	*this = src;
}

Enemy	&Enemy::operator=( Enemy const &src )
{
	this->_hp = src._hp;
	this->_type = src._type;
	return (*this);
}

Enemy::~Enemy()
{
	return;
}

std::string		Enemy::getType() const
{
	return (this->_type);
}

int 			Enemy::getHP() const
{
	return (this->_hp);
}

void 			Enemy::takeDamage( int dmg )
{
	if (dmg >= 0)
		this->_hp -= dmg;
	if (this->_hp < 0)
		this->_hp = 0;
}