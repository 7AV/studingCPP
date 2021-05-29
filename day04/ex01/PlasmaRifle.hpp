//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle( PlasmaRifle &src );
	PlasmaRifle &operator=( PlasmaRifle const & );
	virtual ~PlasmaRifle();

	void		attack() const;
};


#endif //EX01_PLASMARIFLE_HPP
