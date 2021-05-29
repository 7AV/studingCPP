//
// Created by Shantay Budding on 4/23/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
		: AForm("PresidentialPardonForm", 25, 5),
		  _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
		: AForm("PresidentialPardonForm", 25, 5),
		  _target(src._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm
														const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void 		PresidentialPardonForm::_exe(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox."
	<< std::endl;
}