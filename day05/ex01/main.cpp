#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
//		std::cout << "--- invalid forms ---" << std::endl;
//		Form 		form0("Norm", 0,5);

		Bureaucrat	bur1("Pupa", 6);
		Form 		form1("Norm", 5,5);

		std::cout << form1 << std::endl;
		std::cout << bur1 << std::endl;
		std::cout << "--- too low bur ---" << std::endl;
		bur1.signForm(form1);

		bur1.incGrade();
		bur1.signForm(form1);

//		std::cout << "--- try already signed ---" << std::endl;
//		bur1.signForm(form1);

//		std::cout << "--- reverse signed ---" << std::endl;
//		form1.beSigned(bur1);
	}
	catch (std::exception &e)
	{
		std::cout << std::endl << "--- REPORT ---" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return 0;
}
