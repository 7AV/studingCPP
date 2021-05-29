//
// Created by Shantay Budding on 4/13/21.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
	this->_type = "default";
	return;
}

ZombieEvent::~ZombieEvent( void ) {
	return;
}

void 	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

std::string		ZombieEvent::randomName() {

	std::string		name[] = {"Shone", "Mark", "Sebastian", "Claude", "Eva"};
	std::srand(time(NULL));
	return (name[std::rand() % 5]);
}

void	ZombieEvent::randomChump( void ) {

	Zombie	zomb(randomName(), this->_type);
	zomb.announce();
}

Zombie *ZombieEvent::newZombie(std::string name) {

	Zombie	*zomb;

	zomb = new Zombie( name, this->_type);
	return (zomb);
}