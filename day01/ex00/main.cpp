#include "Pony.hpp"

//clang++ -Wall -Wextra -Werror --std=c++98 -g -fsanitize=address *.cpp

void 	ponyOnTheStack(std::string name)
{
	Pony	pony(name);

	pony.eat();
	pony.sleep();
	pony.think();
}

void 	ponyOnTheHeap(std::string name)
{
	Pony	*pony;

	pony = new Pony(name);
	pony->eat();
	pony->sleep();
	pony->think();
	delete pony;
}

int main()
{
	std::cout << "--- ponyOnTheHeap ---" << std::endl;
	ponyOnTheHeap("Sebastian");
	std::cout<< std::endl;
	std::cout << "--- ponyOnTheStack ---" << std::endl;
	ponyOnTheStack("Morris");
	return 0;
}
