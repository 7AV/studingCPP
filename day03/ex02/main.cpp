#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(time(NULL));
	FragTrap robo2( "Claptrap" );
	ScavTrap bobo2( "Blaptrap");

	std::cout << "---- Copy check ----" << std::endl;
	FragTrap robo( robo2 );
	ScavTrap bobo( bobo2 );
	std::cout << std::endl;

	std::cout << "<<<<<<<<<   PART I   >>>>>>>>>" << std::endl;
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Attack testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	robo.rangedAttack("Zerling");
	robo.meleeAttack("Ultralisk");
//	robo.meleeAttack("alo");
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
	std::cout << "--- Attack testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		robo.vaulthunter_dot_exe("bad guy");
	}
	std::cout << std::endl;

	std::cout << "<<<<<<<<<   PART II   >>>>>>>>>" << std::endl;
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Attack testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	bobo.rangedAttack("Footman (yes my lord!)");
	bobo.meleeAttack("Grunt (zag-zag)");
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Damage testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	bobo.takeDamage(3);
	bobo.takeDamage(50);
	bobo.takeDamage(200);
	bobo.takeDamage(5);
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "--- Repair testing ---" << std::endl;
	std::cout << "----------------------" << std::endl;
	bobo.beRepaired(5);
	bobo.beRepaired(50);
	bobo.beRepaired(200);
	bobo.beRepaired(5);
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	std::cout << "-- Challenge testing -" << std::endl;
	std::cout << "----------------------" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		bobo.challengeNewcomer("pretty girl");
	}
	std::cout << std::endl;
	return 0;
}