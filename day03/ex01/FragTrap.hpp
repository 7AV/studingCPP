//
// Created by Shantay Budding on 4/16/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
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

public:
	FragTrap( std::string name );
	FragTrap( FragTrap &src );
	FragTrap &operator=( FragTrap &rhs );
	~FragTrap();

	std::string 	getName( void );
	void 	rangedAttack( std::string const &target);
	void 	meleeAttack( std::string const &target);
	void 	takeDamage( unsigned int amount );
	void 	beRepaired( unsigned int amount );

	void 	vaulthunter_dot_exe(std::string const &target);
};


#endif //EX00_FRAGTRAP_HPP
