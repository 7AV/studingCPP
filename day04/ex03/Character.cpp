//
// Created by Shantay Budding on 4/20/21.
//

#include "Character.hpp"

Character::Character()
{

}

Character::Character( std::string name) : _name(name)
{
	this->_slot = 0;
	for (int i = 0; i < 4; i++)
		this->_bag[i] = 0;
}

Character::Character(Character &src) : _name(src.getName())
{
	this->_slot = 0;
	for (int i = 0; i < src._slot; i++)
		this->equip(src._bag[i]->clone());
	for (int i = this->_slot; i < 4; i++)
		this->_bag[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < this->_slot; i++)
		if (this->_bag[i])
			delete this->_bag[i];
}

Character	&Character::operator=(Character &src)
{
	this->_name = src._name;
	for (int i = 0; i < this->_slot; i++)
		delete this->_bag[i];
	this->_slot = 0;
	for (int i = 0; i < src._slot; i++)
		this->equip(src._bag[i]->clone());
	for (int i = this->_slot; i < 4; i++)
		this->_bag[i] = nullptr;
	return (*this);
}

std::string const &Character::getName() const
{
	return this->_name;
}

void 	Character::equip(AMateria* m)
{
	if ((m) && (_slot < 4))
	{
		for (int i = 0; i < 4; i++)
			if (!this->_bag[i])
			{
				this->_bag[i] = m;
				break;
			}
//		this->_bag[_slot] = m;
		_slot++;
		std::cout << m->getType() << " equipped in " <<
		this->_slot - 1 << " slot." <<  std::endl;
	}
}

void 	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (_bag[idx])
	{
//		for (int i = idx; i < 3;i++)
//		{
//			this->_bag[idx] = this->_bag[idx + 1];
//			this->_bag[idx + 1] = 0;
//		}
		this->_bag[idx] = 0;
		_slot--;
		std::cout << idx << " slot unequipped." <<  std::endl;
	}
}

void 	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= this->_slot)
		return;
	if (this->_bag[idx])
		this->_bag[idx]->use(target);
}