//
// Created by Shantay Budding on 4/30/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template<typename T>
void 	swap(T &x, T &y)
{
	T	z(x);

	z = x;
	x = y;
	y = z;
}

template<typename T>
T const	&min(T const &x, T const &y)
{
	return (x<=y) ? x : y;
}

template<typename T>
T const	&max(T const &x, T const &y)
{
	return  (x>=y) ? x : y;
}

#endif
