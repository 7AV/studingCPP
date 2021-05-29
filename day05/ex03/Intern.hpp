//
// Created by Shantay Budding on 4/23/21.
//

#ifndef EX01_INTERN_HPP
#define EX01_INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;

typedef struct		s_forms {
	std::string 	name;
	AForm			*(Intern::*func)(std::string const &target);
}					t_forms;

class Intern
{
private:
//	std::string 	_names[3];
//	AForm			*_forms[3];

public:
	Intern();
	Intern(Intern const &);
	virtual ~Intern();

	Intern &operator=(Intern const &);

	AForm	*makeForm(std::string const &request, std::string const &target);
	AForm	*Form1(std::string const &target);
	AForm	*Form2(std::string const &target);
	AForm	*Form3(std::string const &target);

	static t_forms			forms[3];

	class FormNotExist : public std::exception {
	public: virtual const char* what() const throw();
	};
};



#endif //EX01_INTERN_HPP
