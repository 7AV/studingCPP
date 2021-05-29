//
// Created by Shantay Budding on 4/13/21.
//

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) {

	if (!isnumber(N) && (N > 0))
	{
		Zombie *horde = new Zombie[N];

		this->_horde = horde;
		this->_cnt = N;
		std::srand(time(NULL));
		for (int i = 0; i < N; i++)
			horde[i].setName(randomName());
	}
	else
		std::cout << "Invalid count." << std::endl;
	return;
}

ZombieHorde::~ZombieHorde( void ) {
	delete [] this->_horde;
}

std::string		ZombieHorde::randomName() {

	std::string		name[] = {"Shone", "Mark", "Sebastian", "Claude", "Eva"};
	return (name[std::rand() % 5]);
}

void 	ZombieHorde::announce() {

	for (int i = 0; i < this->_cnt; i++)
		this->_horde[i].announce();
}