//
// Created by Shantay Budding on 4/23/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: AForm("ShrubberyCreationForm", 145, 137),
	_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: AForm("ShrubberyCreationForm", 145, 137),
	  _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm
		const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void 		ShrubberyCreationForm::_exe(Bureaucrat const &executor) const
{
	(void)executor;
	std::ofstream 	out;

	out.open(this->_target + "_shrubbery");

	out <<
	"\033[1;32m"
    "\n"
 	"              4            \n"
  	"             444           \n"
   	"            44444          \n"
	"           4444444         \n"
 	"            44444          \n"
 	"           4444444         \n"
 	"          444444444        \n"
 	"           4444444         \n"
  	"          444444444        \n"
  	"         44444444444       \n"
  	"        4444444444444      \n"
    "             555           \n"
 	"\033[0m";

	out.close();
}






