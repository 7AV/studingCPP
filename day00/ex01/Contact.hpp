//
// Created by Shantay Budding on 4/12/21.
//

#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstddef>

class Contact {

	std::string		_data[22];

public:
	Contact( void );
	~Contact( void );
	int 			index;
	void 			insert_data( int );
	static void 	ft_format( std::string );
	void 			put_brief( void );
	void 			put_full( void );
};


#endif //EX01_CONTACT_HPP
