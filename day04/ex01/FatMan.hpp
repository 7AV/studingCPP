//
// Created by Shantay Budding on 4/19/21.
//

#ifndef EX01_FATMAN_HPP
#define EX01_FATMAN_HPP

#include "AWeapon.hpp"

class FatMan : public AWeapon
{
public:
	FatMan();
	FatMan( FatMan &src );
	FatMan &operator=( FatMan & );
	virtual ~FatMan();

	void		attack() const;
};


#endif //EX01_FATMAN_HPP
