//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
protected:
	std::string		_name;
	Victim();
public:
	Victim( std::string name );
	Victim( Victim &src );
	Victim &operator=( Victim & );
	virtual ~Victim();

	std::string	getName( void );
	virtual void 	sayHello( void );
	virtual void 	getPolymorphed( void ) const;
};

std::ostream &operator<<( std::ostream &o, Victim &);

#endif //EX00_VICTIM_HPP
