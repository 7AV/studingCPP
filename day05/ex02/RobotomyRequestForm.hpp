//
// Created by Shantay Budding on 4/23/21.
//

#ifndef EX01_ROBOTOMYREQUESTFORM_HPP
#define EX01_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;
	RobotomyRequestForm();

protected:
	virtual void 	_exe(Bureaucrat const &executor) const;

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
};


#endif //EX01_ROBOTOMYREQUESTFORM_HPP
