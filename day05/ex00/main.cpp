#include <iostream>

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << " <---<<< Pupa 0-- >>>---> " << std::endl;
		Bureaucrat b1("Pupa", 0);
		std::cout << b1 << std::endl;
		b1.incGrade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << " --- Lupa 151++ --- " << std::endl;
		Bureaucrat b1("Lupa", 151);
		std::cout << b1 << std::endl;
		b1.decGrade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << " --Biba 1-- -- " << std::endl;
		Bureaucrat b1("Biba", 1);
		std::cout << b1 << std::endl;
		b1.incGrade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << " --Boba 150++ -- " << std::endl;
		Bureaucrat b1("Boba", 150);
		std::cout << b1 << std::endl;
		b1.decGrade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << " --Boba 150++ -- " << std::endl;
	Bureaucrat b1("Boba", 150);
	std::cout << b1 << std::endl;
	std::cout << " --Boba clone -- " << std::endl;
	Bureaucrat b2(b1);
	std::cout << b2 << std::endl;
	std::cout << " --Boba assign -- " << std::endl;
	Bureaucrat b3("Yoda", 66);
	b3 = b2;
	std::cout << b3 << std::endl;

	return 0;
}