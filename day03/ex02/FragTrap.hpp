//
// Created by Shantay Budding on 4/17/21.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	void	_randomAttack(std::string const &target);

public:
	FragTrap( std::string name );
	FragTrap( FragTrap &src );
	FragTrap &operator=( FragTrap &rhs );
	~FragTrap();

	void 	vaulthunter_dot_exe(std::string const &target);
};


#endif //EX02_FRAGTRAP_HPP
