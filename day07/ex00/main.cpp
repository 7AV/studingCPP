#include <iostream>
#include "whatever.hpp"

class Awersome
{
public:
	Awersome(int n): _n(n) {}
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
{
	o << rhs.getN();
	return o;
}

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "--- complex type: ---" << std::endl;
	std::cout << "----- Awersome ------" << std::endl;
	Awersome e(42);
	Awersome f(21);

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	return 0;
}
