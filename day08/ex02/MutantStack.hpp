//
// Created by Shantay Budding on 5/4/21.
//

#ifndef EX02_MUTANTSTACK_H
#define EX02_MUTANTSTACK_H

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() {}
	MutantStack(MutantStack<T, Container> const &src) {*this = src;}
	virtual ~MutantStack() {}

	MutantStack &operator=(MutantStack<T,Container> const &src)
	{this->c=src.c; return *this;}

	typedef typename
	std::stack<T,Container>::container_type::iterator iterator;
	iterator	begin() {return this->c.begin();}
	iterator	end() {return this->c.end();}

	typedef typename
	std::stack<T,Container>::container_type::reverse_iterator r_iterator;
	r_iterator	rbegin() {return this->c.rbegin();}
	r_iterator	rend() {return this->c.rend();}

};


#endif //EX02_MUTANTSTACK_H
