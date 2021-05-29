//
// Created by Shantay Budding on 4/18/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
protected:
	std::string			_name;
	int 				_apcost;
	int 				_damage;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon( AWeapon &src );
	AWeapon &operator=( AWeapon const & );
	virtual ~AWeapon();

	virtual std::string	getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
