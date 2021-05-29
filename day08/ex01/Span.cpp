//
// Created by Shantay Budding on 5/4/21.
//

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const &src) {*this = src;}

Span::~Span() {}

Span &Span::operator=(Span const &src)
{
	this->_N = src._N;
	this->_nums = src._nums;
	return *this;
}

void 	Span::addNumber(int num)
{
	if (this->_nums.size() >= this->_N)
		throw std::runtime_error("Will not fit.");
	this->_nums.insert(num);
}

int 	Span::shortestSpan() const
{
	if (_nums.size() < 2)
		throw std::runtime_error("Not enough elements.");
	std::multiset<int>::iterator 	i1 = _nums.begin();
	std::multiset<int>::iterator 	i2 = ++_nums.begin();
	int diff = 2147483647;
	while (i2 != _nums.end())
	{
		if (std::abs(*i1 - *i2) < diff)
			diff = std::abs(*i1 - *i2);
		i1++;
		i2++;
	}
	return diff;
}

int 	Span::longestSpan() const
{
	int min, max;

	if (_nums.size() < 2)
		throw std::runtime_error("Not enough elements.");
	min = *(std::min_element(_nums.begin(), _nums.end()));
	max = *(std::max_element(_nums.begin(), _nums.end()));
	return (max - min);
}

//int 	Span::longestSpan() const
//{
//	if (_nums.size() < 2)
//		throw std::runtime_error("Not enough elements.");
//	std::vector<int>::iterator 	i1 = _nums.begin();
//	std::vector<int>::iterator 	i2 = _nums.begin() + 1;
//	int diff = 0;
//	while (i2 != _nums.end())
//	{
//		if (std::abs(*i1 - *i2) > diff)
//			diff = std::abs(*i1 - *i2);
//		i1++;
//		i2++;
//	}
//	return diff;
//}




