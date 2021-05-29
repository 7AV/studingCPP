#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int, std::list<int> > lst;
	int num = 21;
	for (int x = 0; x < 21; x++)
	{
		lst.push(num);
		num += 21;
	}

	std::cout << std::endl << "--- LIST TEST ---" << std::endl;
	MutantStack<int, std::list<int> >::iterator it1 = lst.begin();
	MutantStack<int, std::list<int> >::iterator it2 = lst.end();
	while (it1 != it2)
	{
		std::cout << *it1 << " ";
		it1++;
	}

	std::cout << std::endl << "--- LIST TEST (reverse) ---" << std::endl;
	MutantStack<int, std::list<int> >::r_iterator rit1 = lst.rbegin();
	MutantStack<int, std::list<int> >::r_iterator rit2 = lst.rend();
	while (rit1 != rit2)
	{
		std::cout << *rit1 << " ";
		rit1++;
	}


	return 0;
}
