//
// Created by Shantay Budding on 4/23/21.
//

#ifndef EX01_PRESIDENTIALPARDONFORM_HPP
#define EX01_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
	PresidentialPardonForm();

protected:
	virtual void 	_exe(Bureaucrat const &executor) const;

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &);
};


#endif //EX01_PRESIDENTIALPARDONFORM_HPP
