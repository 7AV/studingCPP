//
// Created by Shantay Budding on 4/23/21.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &src) { *this = src; };

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &) { return (*this); }

AForm	*Intern::Form1(std::string const &target) {
	return new ShrubberyCreationForm(target);
}
AForm	*Intern::Form2(std::string const &target) {
	return new RobotomyRequestForm(target);
}
AForm	*Intern::Form3(std::string const &target) {
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeForm(std::string const &request, std::string const &target)
{
	AForm	*tmp;

	for (int i = 0; i < 3; i++)
	{
		if (request == forms[i].name)
		{
			tmp = (this->*forms[i].func)(target);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return tmp;
		}
	}
	std::cout << "Invalid request: " << request << std::endl;
	throw Intern::FormNotExist();
	return (NULL);
}

t_forms 	Intern::forms[3] = {
		{"shrubbery creation", &Intern::Form1},
		{"robotomy request", &Intern::Form2},
		{"presidential pardon", &Intern::Form3}
};

const char *Intern::FormNotExist::what() const throw()
{
	return ("Form not exist.");
}
