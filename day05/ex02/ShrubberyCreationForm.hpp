//
// Created by Shantay Budding on 4/23/21.
//

#ifndef EX01_SHRUBBERYCREATIONFORM_HPP
#define EX01_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string _target;
	ShrubberyCreationForm();

protected:
	virtual void 	_exe(Bureaucrat const &executor) const;

public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
};


#endif //EX01_SHRUBBERYCREATIONFORM_HPP
