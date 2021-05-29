//
// Created by Shantay Budding on 4/22/21.
//

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const &name, int grade)
	: _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
	: _name(src.getName()), _grade(src.getGrade())
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::string 	Bureaucrat::getName() const { return (this->_name); }

int 			Bureaucrat::getGrade() const { return (this->_grade); }

void			Bureaucrat::incGrade()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void 			Bureaucrat::decGrade()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void 		Bureaucrat::signForm(Form &src) const
{
	if (src.getSign() == 1)
	{
		std::cout << this->_name << " cannot sign " << src.getName() <<
		" because: " << Bureaucrat::AlreadySigned().what() << std::endl;
//		throw Bureaucrat::AlreadySigned();
	}
	else if (this->_grade > src.getGrSign())
	{
		std::cout << this->_name << " cannot sign " << src.getName() <<
		" because: " << Bureaucrat::GradeTooLowException().what() << std::endl;
//		throw Bureaucrat::GradeTooLowException();
	}
	else
		std::cout << this->_name << " signs " << src.getName() << std::endl;
	src.beSigned(*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low.");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high.");
}

const char *Bureaucrat::AlreadySigned::what() const throw()
{
	return ("Form already signed.");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return o;
}