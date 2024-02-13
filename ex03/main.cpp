/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:23:43 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:48:01 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	
	std::cout << "---[Creation of MateriaSource src]---" << std::endl;
	IMateriaSource* src = new MateriaSource();	std::cout << std::endl;

	std::cout << "---[src learns Ice]---" << std::endl;
	src->learnMateria(new Ice());				std::cout << std::endl;
	
	std::cout << "---[src learns Cure]---" << std::endl;
	src->learnMateria(new Cure());				std::cout << std::endl;
	
	std::cout << "---[Creation of Character me]---" << std::endl;
	ICharacter* me = new Character("me");		std::cout << std::endl;
	
	AMateria* tmp;
	
	std::cout << "---[Creation of mataria ice + equiped to me]---" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);	std::cout << std::endl;
	
	std::cout << "---[Creation of mataria cure + equiped to me]---" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);	std::cout << std::endl;

	std::cout << "---[Creation of character bob]---" << std::endl;
	ICharacter* bob = new Character("bob"); std::cout << std::endl;

	std::cout << "---[me uses his materias at bob]---" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);	std::cout << std::endl;

	std::cout << "---[me unequip some materias]---" << std::endl;
	me->unequip(2);
	me->unequip(-1);
	me->unequip(888);
	me->unequip(1); std::cout << std::endl;

	std::cout << "---[me reuses his materias at bob]---" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);	
	me->use(-1, *bob);
	me->use(8888, *bob);	std::cout << std::endl;

	delete bob;	std::cout << std::endl;
	delete me;	std::cout << std::endl;
	delete src;	std::cout << std::endl;
	delete tmp;
	
	return (0);
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }