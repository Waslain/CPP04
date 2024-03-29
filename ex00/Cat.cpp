/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:57:46 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 15:32:16 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << getType() << " says Miaoww" << std::endl;
}
