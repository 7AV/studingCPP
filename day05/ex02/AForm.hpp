//
// Created by Shantay Budding on 4/22/21.
//

#ifndef EX01_AFORM_HPP
#define EX01_AFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
class AForm;
class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool 				_sign;
	int const			_grSign;
	int const			_grExe;
	AForm();

protected:
	virtual void 		_exe(Bureaucrat const &executor) const = 0;

public:
	AForm(std::string const &name, int const grSign, int const grExe);
	AForm(AForm const &);
	virtual ~AForm();

	AForm	&operator=(AForm &);

	std::string		getName() const;
	bool 			getSign() const;
	int 			getGrSign() const;
	int 			getGrExe() const;
	void 			beSigned(Bureaucrat const &);
	void 			execute(Bureaucrat const &executor) const;


	class GradeTooHighException : public std::exception {
	public: virtual const char *what() const throw();
	};

	class GradeTooLowException : public  std::exception {
	public: virtual const char *what() const throw();
	};

	class AlreadySigned : public  std::exception {
	public: virtual const char *what() const throw();
	};

	class NotSigned : public  std::exception {
	public: virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &o, AForm &rhs);


#endif //EX01_AFORM_HPP
