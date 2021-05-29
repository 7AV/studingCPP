#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(time(NULL));
	FragTrap robo1( "Claptrap" );
	ScavTrap robo( "Blaptrap" );
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Attack testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	robo.rangedAttack("Zerling");
	robo.meleeAttack("Ultralisk");
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Damage testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	robo.takeDamage(3);
	robo.takeDamage(50);
	robo.takeDamage(200);
	robo.takeDamage(5);
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Repair testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	robo.beRepaired(5);
	robo.beRepaired(50);
	robo.beRepaired(200);
	robo.beRepaired(5);
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "-- Challenge testing -" << std::endl;
	std::cout << "----------------------" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		robo.challengeNewcomer("pretty girl");
	}
	std::cout << std::endl;

	return 0;
}
