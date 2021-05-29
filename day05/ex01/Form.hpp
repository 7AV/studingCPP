//
// Created by Shantay Budding on 4/22/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include <string>
#include "Bureaucrat.hpp"
class Form;
class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool 				_sign;
	int const			_grSign;
	int const			_grExe;
	Form();

public:
	Form(std::string const &name, int const grSign,	int const grExe);
	Form(Form const &);
	virtual ~Form();

	Form	&operator=(Form &);

	std::string		getName() const;
	bool 			getSign() const;
	int 			getGrSign() const;
	int 			getGrExe() const;
	void 			beSigned(Bureaucrat const &);

	class GradeTooHighException : public std::exception {
	public: virtual const char* what() const throw();
	};

	class GradeTooLowException : public  std::exception {
	public: virtual const char *what() const throw();
	};

	class AlreadySigned : public  std::exception {
	public: virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &o, Form &rhs);


#endif //EX01_FORM_HPP
