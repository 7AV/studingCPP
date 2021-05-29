//
// Created by Shantay Budding on 4/21/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_cnt = 0;
	for (int i = 0; i < 4; i++)
		this->_lib[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
	this->_cnt = src._cnt;
	for (int i = 0; i < src._cnt; i++)
		this->learnMateria(src._lib[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_lib[i] = nullptr;
}
 MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_cnt; i++)
		delete this->_lib[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource &src)
{
	for (int i = 0; i < this->_cnt; i++)
		delete this->_lib[i];
	for (int i = 0; i < src._cnt; i++)
		this->learnMateria(src._lib[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_lib[i] = 0;
	this->_cnt = src._cnt;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *src)
{
	if ((src) && (_cnt < 4))
	{
		this->_lib[_cnt] = src;
		_cnt++;
		std::cout << "add " << src->getType()<< " " << _cnt << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
//	std::cout << "cnt: " << this->_cnt <<
//			  std::endl;
	for (int i = 0; i < this->_cnt; i++)
		if (this->_lib[i]->getType() == type)
		{
//			std::cout << "cnt-> " << i <<
//					  std::endl;
			std::cout << "clone " << this->_lib[i]->getType() <<
			std::endl;
			return (this->_lib[i]->clone());
		}
	return 0;
}

AMateria* 	MateriaSource::getMateria(int ind) const
{
	return this->_lib[ind];
}

int  	MateriaSource::getCnt() const
{
	return this->_cnt;
}

std::ostream &operator<<(std::ostream &o, MateriaSource &rhs)
{
//	for (int i = 0; i < 4; i++)
//	{
//		if (rhs.getMateria(i))
//			o << i << " slot equipped with " <<
//			rhs.getMateria(i)->getType() << "." << std::endl;
//		else
//			o << i << " slot is empty." << std::endl;
//	}
	o << rhs.getCnt();
	return o;
}