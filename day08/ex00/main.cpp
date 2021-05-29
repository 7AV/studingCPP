#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int>	array;

	array.push_back(1);
	array.push_back(2);
	array.push_back(3);

	try
	{
		easyfind(array, 3);
		easyfind(array, 5);
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	std::list<int>	list;

	list.push_back(42);
	list.push_back(21);
	list.push_back(0);

	try
	{
		easyfind(list, 21);
		easyfind(list, 5);
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	return 0;
}
