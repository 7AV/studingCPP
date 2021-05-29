//
// Created by Shantay Budding on 4/22/21.
//

#include "AForm.hpp"

AForm::AForm() : _name(), _sign(false), _grSign(), _grExe() {}


AForm::AForm(std::string const &name, int const grSign,	int const grExe)
	: _name(name), _sign(false), _grSign(grSign), _grExe(grExe)
{
	if ((this->_grSign < 1) || (this->_grExe < 1))
		throw AForm::GradeTooHighException();
	else if ((this->_grSign > 150) || (this->_grExe > 150))
		throw AForm::GradeTooLowException();
}


AForm::AForm(AForm const &src)
	: _name(src._name), _sign(src._sign),
	_grSign(src._grSign), _grExe(src._grExe)
{
	if ((this->_grSign < 1) || (this->_grExe < 1))
		throw AForm::GradeTooHighException();
	else if ((this->_grSign > 150) || (this->_grExe < 150))
		throw AForm::GradeTooLowException();
}

AForm::~AForm() {}

AForm	&AForm::operator=(AForm &src)
{
	this->_sign = src._sign;
	return (*this);
}

std::string		AForm::getName() const { return (this->_name); }

bool 			AForm::getSign() const { return (this->_sign); }

int 			AForm::getGrSign() const { return (this->_grSign); }

int 			AForm::getGrExe() const { return (this->_grExe); }

void 		AForm::beSigned(Bureaucrat const &src)
{
	if (this->_sign == 1)
		throw AForm::AlreadySigned();
	else if (this->_grSign < src.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->_sign = true;
}

void 		AForm::execute(Bureaucrat const &executor) const
{
	if (this->_sign == 0)
		throw AForm::NotSigned();
	else if (this->_grExe < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->_exe(executor);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade needed to that form are too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade needed to that form are too low.");
}

const char *AForm::AlreadySigned::what() const throw()
{
	return ("Form already signed.");
}

const char *AForm::NotSigned::what() const throw()
{
	return ("Form not signed.");
}

std::ostream &operator<<(std::ostream &o, AForm &rhs)
{
	o << rhs.getName() << ". Signature status: " <<
	(rhs.getSign() ? "True" : "False") <<
	". Grade required to sign: " << rhs.getGrSign() <<
	". Grade required to execute: " << rhs.getGrExe() << ".";
	return o;
}
