//
// Created by Shantay Budding on 4/19/21.
//

#include "Squad.hpp"

Squad::Squad() : _squad(NULL), _cnt(0)
{
	return;
}

Squad::Squad(Squad &src) : _squad(NULL), _cnt(0)
{
	// deep
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	this->_cnt = src._cnt;
	// not deep
//	*this = src;
}

Squad	&Squad::operator=(Squad &src)
{
	//delete prev before push src
	if (this->_squad)
	{
		for (int i = 0; i < this->_cnt; i++)
			delete this->_squad[i];
		delete this->_squad;
		this->_squad = NULL;
	}
	// push src
	for (int i = 0; i < src.getCount(); i++)
		this->push(src.getUnit(i)->clone());
	this->_cnt = src._cnt;
	return (*this);
}

Squad::~Squad()
{
	if (this->_squad)
	{
		for (int i = 0; i < this->_cnt; i++)
			delete this->_squad[i];
		delete this->_squad;
	}
}

int		Squad::getCount() const
{
	return (_cnt);
}

ISpaceMarine	*Squad::getUnit(int ind) const
{
	if (ind >= 0 && ind < _cnt && this->_squad)
		return (this->_squad[ind]);
	return NULL;
}

int				Squad::push(ISpaceMarine *src)
{
	if (!src)
		return(this->_cnt);

	if (!this->_squad)
	{
		this->_squad = new ISpaceMarine*[1];
		this->_squad[0] = src;
		this->_cnt++;
		return (this->_cnt);
	}

	for (int i = 0; i < this->_cnt; i++)
		if (this->_squad[i] == src)
			return (this->_cnt);

	ISpaceMarine **dst = new ISpaceMarine*[this->_cnt + 1];
	for (int i = 0; i < this->_cnt; i++)
		dst[i] = this->_squad[i];
	dst[this->_cnt] = src;
	this->_cnt++;
	delete [] this->_squad;
	this->_squad = dst;
	return (this->_cnt);
}