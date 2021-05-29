//
// Created by Shantay Budding on 4/17/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name),
										 NinjaTrap(name)
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 120;
	this->_mep = 120;
	this->_lvl = 1;
	this->_mad = 60;
	this->_rad = 20;
	this->_armor = 5;
	this->_type	= "SUP4-TP";

	std::cout << this->_name << ": EVOLUTION! (super const)" <<
			  std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name << ": DESTRUCTION! (super dest)" << std::endl;
}

void 	SuperTrap::rangedAttack( std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void 	SuperTrap::meleeAttack( std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}