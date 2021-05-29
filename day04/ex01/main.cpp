#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "FatMan.hpp"
#include "Deathclaw.hpp"


int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl << "--- OVERLOAD ---" << std::endl;

	Enemy* sup = new SuperMutant();
	std::cout << sup->getHP() << std::endl;
	me->attack(sup);
	std::cout << me->getWep()->getDamage() << std::endl;
	std::cout << sup->getHP() << std::endl;

	std::cout << std::endl << "--- AP ---" << std::endl;

	Character* hero = new Character("Hero");
	std::cout << *hero;
	AWeapon *fm = new FatMan();
	Enemy	*dc = new Deathclaw();
	std::cout << "mob_hp: " << dc->getHP() << std::endl;

	std::cout << std::endl << "--- without weapon ---" << std::endl;
	hero->attack(dc);

	std::cout << std::endl << "--- with weapon ---" << std::endl;
	hero->equip(fm);
	std::cout << *hero;
	std::cout << std::endl << "- 1 attack-" << std::endl;
	hero->attack(dc);
	std::cout << "w_dmg: " << hero->getWep()->getDamage() << std::endl;
	std::cout << "mob_hp: " << dc->getHP() << std::endl;
	std::cout << *hero;
	std::cout << std::endl << "- 2 attack-" << std::endl;
	hero->attack(dc);
	std::cout << "w_dmg: " << hero->getWep()->getDamage() << std::endl;
	std::cout << "mob_hp: " << dc->getHP() << std::endl;
	std::cout << *hero;
	std::cout << std::endl << "- 3 attack-" << std::endl;
	hero->attack(dc);
	std::cout << *hero;
	std::cout << std::endl << "--- no enemy ---" << std::endl;
	hero->recoverAP();
	hero->recoverAP();
	hero->attack(NULL);
	std::cout << *hero;

	std::cout << std::endl << "--- AP recover ---" << std::endl;

	hero->recoverAP();
	std::cout << *hero;
	hero->recoverAP();
	std::cout << *hero;
	hero->recoverAP();
	std::cout << *hero;
	hero->recoverAP();
	std::cout << *hero;
	hero->recoverAP();
	std::cout << *hero;
	hero->recoverAP();
	std::cout << *hero;

	return 0;
}
