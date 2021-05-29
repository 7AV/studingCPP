//
// Created by Shantay Budding on 4/17/21.
//

#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
//	SuperTrap();

public:
	SuperTrap(std::string name);
//	SuperTrap(SuperTrap &src);
//	SuperTrap &operator=(SuperTrap &);
	~SuperTrap();

	void 	rangedAttack( std::string const &target);
	void 	meleeAttack( std::string const &target);
};


#endif //EX04_SUPERTRAP_HPP
