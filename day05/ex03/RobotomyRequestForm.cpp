//
// Created by Shantay Budding on 4/23/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
		: AForm("RobotomyRequestForm", 72, 45),
		  _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
		: AForm("RobotomyRequestForm", 72, 45),
		  _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm
														const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

void 	RobotomyRequestForm::_exe(Bureaucrat const &executor) const
{
	(void)executor;
	std::srand(time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized *SUCCESSFULLY*" <<
		std::endl;
	else
		std::cout << this->_target << " robotomization *FAILED*" <<
				  std::endl;
}