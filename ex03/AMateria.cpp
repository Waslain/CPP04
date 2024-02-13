/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:38:51 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:37:52 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
	// std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	// std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Default AMateria deconstructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "A basic materia can't be used, nothing happen to" << target.getName() << std::endl;
}
