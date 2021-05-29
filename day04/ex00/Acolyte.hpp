//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX00_ACOLYTE_HPP
#define EX00_ACOLYTE_HPP

#include "Victim.hpp"

class Acolyte : public Victim
{
private:
	Acolyte();
public:
	Acolyte( std::string name );
	Acolyte( Acolyte &src );
	Acolyte &operator=( Acolyte & );
	virtual ~Acolyte();

	void 	sayHello( void );
	void 	getPolymorphed( void ) const;
};


#endif //EX00_ACOLYTE_HPP
