/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:58:45 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:32:07 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Default Ice deconstructor called" << std::endl;
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const &src)
{
	std::cout << "Ice assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}