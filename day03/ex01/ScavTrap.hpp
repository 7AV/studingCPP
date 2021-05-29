//
// Created by Shantay Budding on 4/16/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
private:
	int unsigned	_hp;
	int 			_mhp;
	int 			_ep;
	int 			_mep;
	int 			_lvl;
	std::string		_name;
	int 			_mad;
	int 			_rad;
	int 			_armor;
	void 			randomAttack(std::string const &target);
	void 			randomChallenge(std::string const &target);

public:
	ScavTrap(std::string name );
	ScavTrap(ScavTrap &src );
	ScavTrap &operator=(ScavTrap &rhs );
	~ScavTrap();

	std::string 	getName( void );
	void 	rangedAttack( std::string const &target);
	void 	meleeAttack( std::string const &target);
	void 	takeDamage( unsigned int amount );
	void 	beRepaired( unsigned int amount );

	void 	challengeNewcomer(std::string const &target);
};


#endif //EX01_SCAVTRAP_HPP
