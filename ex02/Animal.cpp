/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:39:15 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/21 16:28:24 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Constructors
Animal::Animal() : _type("default")
{
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "This animal doesn't make sound" << std::endl;
}

std::string	Animal::getType(void)const
{
	return (_type);
}