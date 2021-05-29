//
// Created by Shantay Budding on 4/22/21.
//

#include "Form.hpp"

Form::Form() : _name(), _sign(false), _grSign(), _grExe() {}


Form::Form(std::string const &name, int const grSign,	int const grExe)
	: _name(name), _sign(false), _grSign(grSign), _grExe(grExe)
{
	if ((this->_grSign < 1) || (this->_grExe < 1))
		throw Form::GradeTooHighException();
	else if ((this->_grSign > 150) || (this->_grExe > 150))
		throw Form::GradeTooLowException();
}


Form::Form(Form const &src)
	: _name(src._name), _sign(src._sign),
	_grSign(src._grSign), _grExe(src._grExe)
{
	if ((this->_grSign < 1) || (this->_grExe < 1))
		throw Form::GradeTooHighException();
	else if ((this->_grSign > 150) || (this->_grExe < 150))
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form	&Form::operator=(Form &src)
{
	this->_sign = src._sign;
	return (*this);
}

std::string		Form::getName() const { return (this->_name); }

bool 			Form::getSign() const { return (this->_sign); }

int 			Form::getGrSign() const { return (this->_grSign); }

int 			Form::getGrExe() const { return (this->_grExe); }

void 		Form::beSigned(Bureaucrat const &src)
{
	if (this->_sign == 1)
		throw Form::AlreadySigned();
	else if (this->_grSign < src.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade needed to that form are too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade needed to that form are too low.");
}

const char *Form::AlreadySigned::what() const throw()
{
	return ("Form already signed.");
}

std::ostream &operator<<(std::ostream &o, Form &rhs)
{
	o << rhs.getName() << ". Signature status: " <<
	(rhs.getSign() ? "True" : "False") <<
	". Grade required to sign: " << rhs.getGrSign() <<
	". Grade required to execute: " << rhs.getGrExe() << ".";
	return o;
}
