//
// Created by Shantay Budding on 5/1/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception{
public: virtual const char *what() const throw()
	{
		return ("Element not found.");
	}
};

template<typename T>
int 	easyfind(T &x, int y)
{
	typename T::iterator	it;

	it = std::find(x.begin(), x.end(), y);
	if (it == x.end())
		throw NotFoundException();
	std::cout << "Element '" << y << "' found." << std::endl;
	return 0;
}

#endif //EX00_EASYFIND_HPP
