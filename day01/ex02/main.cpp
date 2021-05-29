#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie		*zomb;
	ZombieEvent	zombiebirth;

	std::cout << "------------------------" << std::endl;
	std::cout << "-------- RANDOM --------" << std::endl;
	std::cout << "--- zombieOnTheStack ---" << std::endl;
	std::cout << "------------------------" << std::endl;
	zombiebirth.setZombieType("random_zombie");
	zombiebirth.randomChump();
	std::cout << std::endl;

	std::cout << "------------------------" << std::endl;
	std::cout << "-------- Pudge ---------" << std::endl;
	std::cout << "--- zombieOnTheHeap ----" << std::endl;
	std::cout << "------------------------" << std::endl;
	zombiebirth.setZombieType("meat_eater");
	zomb = zombiebirth.newZombie("Pudge");
	zomb->announce();
	delete zomb;

	return 0;
}
