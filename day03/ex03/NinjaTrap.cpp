//
// Created by Shantay Budding on 4/17/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 60;
	this->_mhp = 60;
	this->_ep = 120;
	this->_mep = 120;
	this->_lvl = 1;
	this->_mad = 60;
	this->_rad = 5;
	this->_armor = 0;
	this->_type	= "NINJ4-TP";

	std::cout << this->_name << ": ... (const)" <<
			  std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name << ": Shadow disappear. (dest)" <<
			  std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &src)
{
	*this = src;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap &rhs)
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

void 	NinjaTrap::ninjaShoebox(ClapTrap &src)
{
	this->meleeAttack(src.getName());
	src.takeDamage(this->_mad);
	std::cout << this->_name << ": i am your father Luke!" << std::endl;
	std::cout << src.getName() <<
	": NO! NO! It's impossible!!!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &src)
{
	std::cout << this->_name << ": NOOO!!! I lost my father." <<
	std::endl;
	std::cout << this->_name << ": GOODBYE THIS CRUEL WORLD!" <<
	std::endl;
	while ( this->_hp > 0)
	{
		std::cout << "--- next turn ---" << std::endl;
		this->rangedAttack(src.getName());
		src.takeDamage(this->_rad);
	}
}

void 	NinjaTrap::ninjaShoebox(FragTrap &src)
{
	while (((int)this->_hp < this->_mhp) && (src.getEnergy() >= 25))
	{
		std::cout << "--- next turn ---" << std::endl;
		this->beRepaired(src.vaulthunter_dot_exe(this->_name));
	}
}

void 	NinjaTrap::ninjaShoebox(ScavTrap &src)
{
	src.challengeNewcomer(this->_name);
	std::cout << this->_name << " has fail challenge, and been punished by " <<
	src.getName() << "." << std::endl;
	this->takeDamage(10);
	while (this->_hp > 0)
	{
		std::cout << "--- next turn ---" << std::endl;
		src.challengeNewcomer(this->_name);
		if (rand() % 5 == 1)
		{
			std::cout << this->_name << " win main prise!!!"
			<<
			std::endl;
			std::cout << "       * nothing *" << std::endl;
			return;
		}
		std::cout << this->_name << " has fail challenge, and been punished by " <<
				  src.getName() << "." << std::endl;
		this->takeDamage(10);
	}
	std::cout << this->_name << " DIED." << std::endl;


}