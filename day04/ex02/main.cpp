#include <iostream>

#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	std::cout << " ---------" << std::endl;
	ISpaceMarine* bob1 = new TacticalMarine;
	ISpaceMarine* jim1 = new AssTerminator;
	ISpaceMarine* old = new TacticalMarine;
	std::cout << " --- created ---" << std::endl;
	std::cout << std::endl << " --- COPY CHECK ---" << std::endl;
	Squad	s1;
	s1.push(bob1);
	s1.push(jim1);
	Squad	s2(s1);
	std::cout << " --- copied ---" << std::endl;
	s1.getUnit(1)->battleCry();
	s2.getUnit(1)->battleCry();
	std::cout << std::endl << " --- ASSIGN CHECK ---" << std::endl;
	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* jim2 = new AssTerminator;
	Squad	s3;
	Squad	s4;
	s3.push(old);
	s3.push(bob2);
	s3.push(jim2);
	std::cout << " --- delete ---" << std::endl;
	s4 = s3;
	std::cout << " --- deleted ---" << std::endl;
	std::cout << s3.getCount() << std::endl;
	std::cout << "0: " << s3.getUnit(0) << std::endl;
	std::cout << "1: " << s3.getUnit(1) << std::endl;
	std::cout << "2: " << s3.getUnit(2) << std::endl;
	std::cout << "3: " << s3.getUnit(3) << std::endl;
	std::cout << "-1: " << s3.getUnit(-1) << std::endl;
	std::cout << "21: " << s3.getUnit(21) << std::endl;


//while (1) {}
	return 0;
}
