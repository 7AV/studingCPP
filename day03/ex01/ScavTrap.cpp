//
// Created by Shantay Budding on 4/16/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 50;
	this->_mep = 50;
	this->_lvl = 1;
	this->_mad = 20;
	this->_rad = 15;
	this->_armor = 3;

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
	*this = src;
}

ScavTrap &ScavTrap::operator=( ScavTrap &rhs )
{
	this->_name = rhs.getName();
	return (*this);
}

std::string 	ScavTrap::getName( void )
{
	return (this->_name);
}

void 	ScavTrap::rangedAttack( std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " <<
			  target << " at range, causing " << this->_rad <<
			  " points of damage!" << std::endl;
}

void 	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << this->_name << " attacks " <<
			  target << " in melee, causing " << this->_mad <<
			  " points of damage!" << std::endl;
}

void 	ScavTrap::takeDamage( unsigned int amount )
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << ": im already DEAD, YOU CHUNK!!!" <<
		std::endl;
		amount = 0;
	}
	else if ((int)amount <= this->_armor)
	{
		std::cout << this->_name << ": HA-HA!!! REFLECTED!" << std::endl;
		amount = 0;
	}
	else
	{
		amount -= this->_armor;
		if (amount > this->_hp)
		{
			amount = this->_hp;
			this->_hp = 0;
		}
		else
			this->_hp = this->_hp - amount;
		std::cout << this->_name << ": OUCH!!! It hurts!" << std::endl;
	}
	std::cout << "SC4V-TP " << this->_name << " takes " <<
			  amount << " points of damage! Current HP: " << this->_hp <<
			  std::endl;
}

void 	ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)(this->_hp + amount) > this->_mhp)
	{
		amount = this->_mhp - this->_hp;
		this->_hp = _mhp;
	}
	else
		this->_hp = this->_hp + amount;

	std::cout << this->_name << ": I found health!" << std::endl;

	std::cout << "SC4V-TP " << this->_name << " has been repaired by " <<
			  amount << " health points. Current HP: " << this->_hp << std::endl;
}

void 	ScavTrap::randomAttack(std::string const &target)
{
	std::string		pool[] = {"One, two... PUNCH ATTACK!!!",
								 "Meet professor punch!",
								 "Guess who?",
								 "Take that! And that... and that...",
								 "Ready for the PUNCHline?!"};

	std::cout  << pool[std::rand() % 5] << " SC4V-TP " << this->_name
	<< " causing " << (std::rand() % this->_mad + 1)
	<< " points of damage to " << target << "!" << std::endl;

	this->_ep -= 25;
}

void 	ScavTrap::randomChallenge(std::string const &target)
{
	std::string		pool[] = {
			"You versus me! Me versus you! Either way! (duel challenge).",
			"Its time to do some stuff, minion. (quest challenge).",
			"DANCE! BABY! DANCE! (dance challenge).",
			"Guess what? (question challenge).",
			"How strong you face is? (pull-ups challenge)."};

	std::cout  << pool[std::rand() % 5] << " SC4V-TP " << this->_name
		<< " challenges " << target << "." << std::endl;

	this->_ep -= 25;
}

void 	ScavTrap::challengeNewcomer(std::string const &target)
{
	randomChallenge(target);
}