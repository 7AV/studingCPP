//
// Created by Shantay Budding on 4/16/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 50;
	this->_mep = 50;
	this->_lvl = 1;
	this->_mad = 20;
	this->_rad = 15;
	this->_armor = 3;
	this->_type	= "SC4V-TP";

	std::cout << this->_name << ": Here we go again! Ready for action! (const)" <<
			  std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": The robot is dead, long live the robot! (dest)"
			  << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &src)
{
	std::cout << src._name << ": " << src._name <<
	", you are my mommy! (copy)" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=( ScavTrap &rhs )
{
	this->_name = rhs.getName();
	this->_hp = rhs._hp;
	this->_mhp = rhs._mhp;
	this->_ep = rhs._ep;
	this->_mep = rhs._mep;
	this->_lvl = rhs._lvl;
	this->_mad = rhs._mad;
	this->_rad = rhs._rad ;
	this->_armor = rhs._armor;
	this->_type	= rhs._type;
	return (*this);
}

void 	ScavTrap::_randomChallenge(std::string const &target)
{
	std::string		pool[] = {
			"You versus me! Me versus you! Either way! (duel challenge).",
			"Its time to do some stuff, minion. (quest challenge).",
			"DANCE! BABY! DANCE! (dance challenge).",
			"Guess what? (question challenge).",
			"How strong you face is? (pull-ups challenge)."};

	std::cout  << pool[std::rand() % 5] << " SC4V-TP " << this->_name
			   << " challenges " << target << "." << std::endl;
}

void 	ScavTrap::challengeNewcomer(std::string const &target)
{
	_randomChallenge(target);
}