//
// Created by Shantay Budding on 4/16/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 100;
	this->_mep = 100;
	this->_lvl = 1;
	this->_mad = 30;
	this->_rad = 20;
	this->_armor = 5;

	std::cout << this->_name << ": Hahahahaha! I'm alive! I'm alive! (const)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD! (dest)" << std::endl;
}

FragTrap::FragTrap( FragTrap &src)
{
	*this = src;
}

FragTrap &FragTrap::operator=( FragTrap &rhs )
{
	this->_name = rhs.getName();
	return (*this);
}

std::string 	FragTrap::getName( void )
{
	return (this->_name);
}

void 	FragTrap::rangedAttack( std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " <<
	target << " at range, causing " << this->_rad <<
	" points of damage!" << std::endl;
}

void 	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " <<
	target << " in melee, causing " << this->_mad <<
	" points of damage!" << std::endl;
}

void 	FragTrap::takeDamage( unsigned int amount )
{
	if ((int)amount <= this->_armor)
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
	std::cout << "FR4G-TP " << this->_name << " takes " <<
			  amount << " points of damage! Current HP: " << this->_hp <<
			  std::endl;
}

void 	FragTrap::beRepaired(unsigned int amount)
{
	if ((int)(this->_hp + amount) > this->_mhp)
	{
		amount = this->_mhp - this->_hp;
		this->_hp = _mhp;
	}
	else
		this->_hp = this->_hp + amount;

	std::cout << this->_name << ": I found health!" << std::endl;

	std::cout << "FR4G-TP " << this->_name << " has been repaired by " <<
			  amount << " health points. Current HP: " << this->_hp << std::endl;
}

void 	FragTrap::randomAttack(std::string const &target)
{
	std::string		pool[] = {"Sniped!",
								"Chk-chk, BOOM!",
								 "Exploooooosions!",
								 "Coffee? Black... like my soul.",
								 "Get off my lawn!"};

	std::cout  << pool[std::rand() % 5] << " FR4G-TP " << this->_name << " causing " <<
	(std::rand() % this->_mad + 1) << " points of damage to " <<
	target << "!" << std::endl;

	this->_ep -= 25;
}

void 	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_ep >= 25)
		randomAttack(target);
	else
		std::cout << "* YOU DONT HAVE ENOUGH ENERGY *" << std::endl;
}