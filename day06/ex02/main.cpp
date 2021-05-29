/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:29:21 by sbudding          #+#    #+#             */
/*   Updated: 2021/04/29 14:29:24 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base {public:virtual~Base(){};};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base 	*generate(void)
{
	Base *dst;

	int i = rand() % 3;
	switch (i)
	{
		case 0:
		{dst = new A;std::cout << "generated:  A" << std::endl;break;}
		case 1:
		{dst = new B;std::cout << "generated:  B" << std::endl;break;}
		case 2:
		{dst = new C;std::cout << "generated:  C" << std::endl;break;}
	}
	return dst;
}

void	identify_from_pointer(Base *p)
{
	dynamic_cast<A*>(p) ?
	std::cout << "A" << std::endl :
	dynamic_cast<B*>(p) ?
	std::cout << "B" << std::endl :
	dynamic_cast<C*>(p) ?
	std::cout << "C" << std::endl : 0;
}

void	identify_from_reference(Base &p)
{
	try{
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast&){}

	try{
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast&){}

	try{
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast&){}
}


int main()
{
	Base	*ptr;
	Base	ref;
	std::srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		ptr = generate();
		std::cout << "by pointer: ";
		identify_from_pointer(ptr);
		std::cout << "by referen: ";
		identify_from_reference(*ptr);
		std::cout << "-------\n";
	}
	return 0;
}
