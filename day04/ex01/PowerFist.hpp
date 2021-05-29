//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist( PowerFist &src );
	PowerFist &operator=( PowerFist const & );
	virtual ~PowerFist();

	void		attack() const;
};


#endif //EX01_POWERFIST_HPP
