#include <iostream>
#include "Array.hpp"

class Awersome
{
public:
	Awersome(int n): _n(n) {}
	Awersome(): _n(666) {}
	Awersome(Awersome const &src) {this->_n = src._n;}
	bool operator==(Awersome const &rhs) const {return(this->_n==rhs._n);}
	bool operator!=(Awersome const &rhs) const {return(this->_n!=rhs._n);}
	bool operator>(Awersome const &rhs) const {return(this->_n>rhs._n);}
	bool operator<(Awersome const &rhs) const {return(this->_n<rhs._n);}
	bool operator>=(Awersome const &rhs) const {return(this->_n>=rhs._n);}
	bool operator<=(Awersome const &rhs) const {return(this->_n<=rhs._n);}

	int 	getN(void) const {return (this->_n);}

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awersome const &rhs)
{o << rhs.getN();return o;}

int main()
{

	std::cout << " --- Construction with no parameter ---" << std::endl;
	Array<int>	a;
	std::cout << "int: " << a << "- " << a.size() << std::endl;

	std::cout << std::endl <<
	" --- Construction with an unsigned int n as a parameter ---" << std::endl;
	Array<int>	b(5);
	std::cout << "int: " << b << "- " << b.size() << std::endl;
	b[0] = 42;
	std::cout << "int: " << b << "- " << b.size() << std::endl;

	std::cout << std::endl <<
	" --- Construction by copy and assignment operator ---" << std::endl;
	Array<int> c(b);
	std::cout << "int: " << c << "- " << c.size() << std::endl;
	Array<int> c1 = b;
	std::cout << "int: " << c1 << "- " << c1.size() << std::endl;

	std::cout << std::endl <<
	" --- Modifying won’t affect anything in the other array ---" << std::endl;
	b[1] = 21;
	std::cout << "int: " << b << "- " << b.size() << std::endl;
	std::cout << "int: " << c << "- " << c.size() << std::endl;
	std::cout << "int: " << c1 << "- " << c1.size() << std::endl;

	std::cout << std::endl <<
	" ====================================== " << std::endl;

	std::cout << " --- Construction with no parameter ---" << std::endl;
	Array<Awersome>	d;
	std::cout << "Awersome: " << d << "- " << d.size() << std::endl;

	std::cout << std::endl <<
	" --- Construction with an unsigned int n as a parameter ---" << std::endl;
	Array<Awersome>	e(6);
	std::cout << "Awersome: " << e << "- " << e.size() << std::endl;
	e[0] = 42;
	std::cout << "Awersome: " << e << "- " << e.size() << std::endl;

	std::cout << std::endl <<
	" --- Assignment operator ---" << std::endl;
	d = e;
	std::cout << "Awersome: " << d << "- " << d.size() << std::endl;


	try
	{
		std::cout << b[6] << std::endl;
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

	return 0;
}
