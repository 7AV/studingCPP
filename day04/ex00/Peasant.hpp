//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX00_PEASANT_HPP
#define EX00_PEASANT_HPP

#include "Victim.hpp"

class Peasant : public Victim
{
private:
	Peasant();
public:
	Peasant( std::string name );
	Peasant( Peasant &src );
	Peasant &operator=( Peasant & );
	virtual ~Peasant();

	void 	sayHello( void );
	void 	getPolymorphed( void ) const;
};


#endif //EX00_PEASANT_HPP
