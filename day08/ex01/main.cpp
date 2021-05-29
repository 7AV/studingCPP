#include <iostream>
#include "Span.hpp"

int main()
{

	std::cout << "--- EASY TEST ---" << std::endl;
	try
	{
		Span a = Span(5);

		a.addNumber(1);
		a.addNumber(5);
		a.addNumber(26);
		a.addNumber(2);
		a.addNumber(10);

		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;

		a.addNumber(666);
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl << "--- 10000 TEST ---" << std::endl;

	Span a = Span(10005);

	a.addNumber(1);
	a.addNumber(5);
	a.addNumber(26);
	a.addNumber(2);
	a.addNumber(10);

	std::vector<int>	b;
	std::srand(time(NULL));
	for (int i = 0; i < 10000; ++i)
		b.push_back(rand() % 42424242424242);
	a.addNumber(b.begin(), b.end());

	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	try
	{
		a.addNumber(b.begin(), b.end());
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	return 0;
}
