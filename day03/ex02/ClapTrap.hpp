//
// Created by Shantay Budding on 4/17/21.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	int unsigned	_hp;
	int 			_mhp;
	int 			_ep;
	int 			_mep;
	int 			_lvl;
	std::string		_name;
	int 			_mad;
	int 			_rad;
	int 			_armor;
	std::string 	_type;
	ClapTrap();

public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap &src );
	ClapTrap &operator=( ClapTrap &rhs );
	~ClapTrap();

	std::string 	getName( void );
	void 	rangedAttack( std::string const &target);
	void 	meleeAttack( std::string const &target);
	void 	takeDamage( unsigned int amount );
	void 	beRepaired( unsigned int amount );

};


#endif //EX02_CLAPTRAP_HPP
