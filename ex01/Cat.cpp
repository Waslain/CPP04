/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:57:46 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 16:02:14 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	_brain = NULL;
	*this = copy;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Default Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	_type = src._type;
	if (_brain != NULL)
		delete _brain;
	_brain = new Brain(*src._brain);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << getType() << " says Miaoww" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (_brain);
}
