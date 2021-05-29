//
// Created by Shantay Budding on 4/30/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	virtual ~Array();

	Array<T>	&operator=(Array<T> const &rhs);
	T			&operator[](unsigned int ind) const throw (std::out_of_range);

	unsigned int 	size(void) const;

private:
	T				*_array;
	unsigned int	_size;

};

template<typename T>
Array<T>::Array() :  _array(new T[0]), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = 0;
}

template<typename T>
Array<T>::Array(Array<T> const &src)
	: _array(new T[src.size()]), _size(src.size())
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src[i];
}

template<typename T>
Array<T>::~Array() {delete [] this->_array;}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
	{
		delete [] this->_array;
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs[i];
	}
	return (*this);
}

template<typename T>
T		&Array<T>::operator[](unsigned int ind) const throw(std::out_of_range)
{
	if (ind >= this->_size)
			throw (std::out_of_range("error: out of limits"));
	return (*(this->_array + ind));
}
template<typename T>
unsigned int 	Array<T>::size(void) const
{
	return this->_size;
}

template<typename T>
std::ostream  &operator<<(std::ostream &o, Array<T> const &rhs)
{
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << rhs[i] << " ";
//	std::cout << std::endl;
	return o;
}

#endif //EX02_ARRAY_HPP
