/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:19:10 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 15:48:41 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	_brain = NULL;
	*this = copy;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Default Dog Deconstructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	_type = src._type;
	if (_brain != NULL)
		delete _brain;
	_brain = new Brain(*src._brain);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << getType() << " says Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (_brain);
}