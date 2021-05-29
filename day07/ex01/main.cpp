#include <iostream>
#include "iter.hpp"

class Awersome
{
public:
	Awersome(void): _n(42) {return;}
	int get(void) const {return this->_n;}

	void operator++(int rhs) {(void)rhs;this->_n = this->_n + 1;}
	void operator--(int rhs) {(void)rhs;this->_n = this->_n - 1;}

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awersome const &rhs){o << rhs.get(); return o;}

template<typename T>
void print(T const &x) {std::cout << x << std::endl; return;}

template<typename T>
void inc(T &x) {x++;}

template<typename T>
void decr(T &x) {x--;}

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awersome tab2[5];

	iter(tab,5,print);
	iter(tab2,5,print);
	std::cout << "----------" << std::endl;

	iter(tab,5,decr);
	iter(tab,5,print);
	std::cout << "----------" << std::endl;

	iter(tab2,5,inc);
	iter(tab2,5,print);
	std::cout << "----------" << std::endl;



	return 0;
}
