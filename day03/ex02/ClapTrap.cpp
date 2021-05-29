//
// Created by Shantay Budding on 4/17/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "clone: Who is my daddy?! (def parent const)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hp = 0;
	this->_mhp = 0;
	this->_ep = 0;
	this->_mep = 0;
	this->_lvl = 0;
	this->_mad = 0;
	this->_rad = 0;
	this->_armor = 0;
	this->_type	= "CL4P-TP";

	std::cout << this->_name << ": I need you clothes. (parent const)" <<
	std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << ": I'll be BACK. (parent dest)" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &src)
{
	*this = src;
}

ClapTrap &ClapTrap::operator=( ClapTrap &rhs )
{
	this->_name = rhs.getName();
	return (*this);
}

std::string 	ClapTrap::getName( void )
{
	return (this->_name);
}

void 	ClapTrap::rangedAttack( std::string const &target)
{
	std::cout << this->_type <<" " << this->_name << " attacks " <<
			  target << " at range, causing " << this->_rad <<
			  " points of damage!" << std::endl;
}

void 	ClapTrap::meleeAttack( std::string const &target)
{
	std::cout << this->_type <<" " << this->_name << " attacks " <<
			  target << " in melee, causing " << this->_mad <<
			  " points of damage!" << std::endl;
}

void 	ClapTrap::takeDamage( unsigned int amount )
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
	std::cout  << this->_type << " " << this->_name << " takes " <<
			  amount << " points of damage! Current HP: " << this->_hp <<
			  std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)this->_hp == (int)this->_mhp)
	{
		std::cout << this->_name << ": I am FULL!" << std::endl;
		std::cout  << this->_type << " " << this->_name <<
				   " has been repaired by 0 health points. Current HP: " <<
				   this->_hp << std::endl;
		return;
	}
	if ((int)(this->_hp + amount) > this->_mhp)
	{
		amount = this->_mhp - this->_hp;
		this->_hp = _mhp;
	}
	else
		this->_hp = this->_hp + amount;

	std::cout << this->_name << ": I found health!" << std::endl;

	std::cout  << this->_type << " " << this->_name <<
	" has been repaired by " << amount << " health points. Current HP: " <<
	this->_hp << std::endl;
}
