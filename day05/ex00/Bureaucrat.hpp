//
// Created by Shantay Budding on 4/22/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
	std::string const	_name;
	int 				_grade;
	Bureaucrat();

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &);

	std::string 	getName() const;
	int 			getGrade() const;
	void			incGrade();
	void 			decGrade();

	class GradeTooHighException : public std::exception {
	public: virtual const char* what() const throw();
	};

	class GradeTooLowException : public  std::exception {
	public: virtual const char *what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &);

#endif //EX00_BUREAUCRAT_HPP
