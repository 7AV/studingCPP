//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon( std::string name );
	Peon( Peon &src );
	Peon &operator=( Peon & );
	virtual ~Peon();

	void 	sayHello( void );
	void 	getPolymorphed( void ) const;
};


#endif //EX00_PEON_HPP
