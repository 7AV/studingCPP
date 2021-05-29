#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat	bur("Pupa", 5);
		Bureaucrat	bur2("Lupa", 45);

		ShrubberyCreationForm	form1("Tree");
		RobotomyRequestForm		form2("Bender");
		PresidentialPardonForm	form3("Fray");

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		std::cout << std::endl;

		std::cout << "--- Sign ---" << std::endl;
		bur.signForm(form1);
		bur.signForm(form2);
		bur.signForm(form3);

		std::cout << std::endl << "--- Execute form1 ---" << std::endl;
		bur.executeForm(form1);
		std::cout << std::endl << "--- Execute form2 ---" << std::endl;
		bur.executeForm(form2);
		std::cout << std::endl << "--- Execute form3 ---" << std::endl;
		bur.executeForm(form3);

		std::cout << std::endl << "--- Reverse Execute form1 ---" << std::endl;
		form1.execute(bur);
		std::cout << std::endl << "--- Reverse Execute form2 ---" << std::endl;
		form2.execute(bur);
		std::cout << std::endl << "--- Reverse Execute form3 ---" << std::endl;
		form3.execute(bur);

	}
	catch (std::exception &e)
	{
		std::cout << std::endl << "--- REPORT ---" << std::endl;
		std::cout << e.what() << std::endl;
	}


	return 0;
}
