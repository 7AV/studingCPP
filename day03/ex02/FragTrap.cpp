//
//
// Created by Shantay Budding on 4/16/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_mhp = 100;
	this->_ep = 100;
	this->_mep = 100;
	this->_lvl = 1;
	this->_mad = 30;
	this->_rad = 20;
	this->_armor = 5;
	this->_type	= "FR4G-TP";

	std::cout << this->_name << ": Hahahahaha! I'm alive! I'm alive! (const)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": I'M DEAD I'M DEAD OHMYGOD I'M DEAD! (dest)" << std::endl;
}

FragTrap::FragTrap( FragTrap &src)
{
	std::cout << src._name << ": One, two... my daddy is " << src._name <<
	 ". (copy)" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=( FragTrap &rhs )
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
	this->_type = rhs._type;
	return (*this);
}

void 	FragTrap::_randomAttack(std::string const &target)
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
		_randomAttack(target);
	else
		std::cout << "* YOU DONT HAVE ENOUGH ENERGY *" << std::endl;
}