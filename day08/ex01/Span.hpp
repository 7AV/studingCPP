//
// Created by Shantay Budding on 5/4/21.
//

#ifndef EX01_SPAN_H
#define EX01_SPAN_H

#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <exception>

class Span
{
private:
	unsigned int 		_N;
	std::multiset<int>	_nums;
	Span();

public:
	Span(unsigned int);
	Span(Span const &);
	virtual ~Span();

	Span &operator=(Span const &);

	void 	addNumber(int);
	int 	shortestSpan() const;
	int 	longestSpan() const;

	template<typename T1>
	void 	addNumber(T1 begin, T1 end)
	{
		if (_nums.size() >= _N)
			throw std::runtime_error("Will not fit.");
		if (_nums.size() + std::distance(begin, end) > _N)
			throw std::runtime_error("Will not fit.");
		_nums.insert(begin, end);
	}
};


#endif //EX01_SPAN_H
