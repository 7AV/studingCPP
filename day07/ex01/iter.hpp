//
// Created by Shantay Budding on 4/30/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template<typename T1>
void 	iter(T1 *x, int const size, void (*func)(T1 &arg))
{
	for (int i = 0; i < size; i++)
		func(*(x + i));
}

template<typename T1>
void 	iter(T1 const *x, int const size, void (*func)(T1 const &arg))
{
	for (int i = 0; i < size; i++)
		func(*(x + i));
}

#endif //EX01_ITER_HPP
