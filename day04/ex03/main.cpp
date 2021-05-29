#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	std::cout << " ---------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << " ----add 5----" << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Ice());
	ICharacter* me2 = new Character("me");

	std::cout << " ----equip----" << std::endl;
	AMateria* tmp2;
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me2->equip(tmp2);
	me2->equip(tmp2);
	me2->unequip(1);
	tmp2 = src2->createMateria("ice");
	me2->equip(tmp2);
	me2->equip(tmp2);
	me2->equip(tmp2);
	me2->equip(tmp2);
	me2->equip(tmp2);
	ICharacter* me3 = new Character("me");
	me3 = me2;
	ICharacter* bob2 = new Character("bob");
	std::cout << " ----use----" << std::endl;
	me2->use(0, *bob2);
	me2->use(1, *bob2);
	me2->use(2, *bob2);
	me2->use(3, *bob2);
	me2->use(5, *bob2);
	std::cout << " ----use-assign---" << std::endl;
	me3->use(0, *bob2);
	me3->use(1, *bob2);
	me3->use(2, *bob2);
	me3->use(3, *bob2);
	me3->use(5, *bob2);


//	while (1){}
	return 0;
}