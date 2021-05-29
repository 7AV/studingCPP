//
// Created by Shantay Budding on 4/20/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string 	 	_name;
	AMateria			*_bag[4];
	int 				_slot;
	Character();

public:
	Character(std::string name);
	Character(Character &);
	virtual ~Character();

	Character	&operator=(Character &);

	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_HPP
