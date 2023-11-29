/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:07:45 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/29 11:40:15 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Constructing" << std::endl;
	const Animal	*animal = new Animal();
	std::cout << std::endl;
	std::cout << "Testing" << std::endl;

	std::cout << "Animal _type: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	delete animal;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "Constructing" << std::endl;
	const Animal	*kitty = new Cat();
	std::cout << std::endl;

	std::cout << "Testing" << std::endl;
	std::cout << "Cat _type: " << kitty->getType() << std::endl;
	kitty->makeSound();
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	delete kitty;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "Constructing" << std::endl;
	const Animal	*doggo = new Dog();
	std::cout << std::endl;
	std::cout << "Testing" << std::endl;
	std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	doggo->makeSound();
	std::cout << std::endl;
	std::cout << "Deconstructing" << std::endl;
	delete doggo;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << "Constructing" << std::endl;
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	std::cout << std::endl;

	std::cout << "Testing" << std::endl;
	std::cout << "Animal _type: " << wrong_animal->getType() << std::endl;
	wrong_animal->makeSound();
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	delete wrong_animal;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Constructing" << std::endl;
	const WrongAnimal	*wrong_kitty = new WrongCat();
	std::cout << std::endl;

	std::cout << "Testing" << std::endl;
	std::cout << "WrongCat _type: " << wrong_kitty->getType() <<std::endl;
	wrong_kitty->makeSound();
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	delete wrong_kitty;
	std::cout << std::endl;

	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Constructing" << std::endl;
	const WrongCat	*wrong_catta = new WrongCat();
	std::cout << std::endl;

	std::cout << "Testing" << std::endl;
	std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
	wrong_catta->makeSound();
	std::cout << std::endl;

	std::cout << "Deconstructing" << std::endl;
	delete wrong_catta;
	std::cout << std::endl;

	return (0);
}