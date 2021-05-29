#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"
#include "Acolyte.hpp"


int main()
{
	std::cout << "======= CREATE ========" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	std::cout << "---------" << std::endl;
	Victim jim("Jimmy");
	std::cout << "---------" << std::endl;
	Peon joe("Joe");
	std::cout << "---------" << std::endl;
	Peasant boba("Boba");
	std::cout << "---------" << std::endl;
	Acolyte biba("Biba");
	std::cout  << std::endl;


	std::cout << "========= INTRODUCE ========" << std::endl;
	std::cout << robert << jim << joe << boba << biba;
	std::cout << std::endl << "========= MORPH ========" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(boba);
	robert.polymorph(biba);
	std::cout << std::endl << "========= DESTRUCT ========" << std::endl;

	return 0;
}