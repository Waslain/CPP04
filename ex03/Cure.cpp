/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:58:45 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/12 18:07:28 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure()
{
	std::cout << "Default Cure deconstructor called" << std::endl;
}

Cure* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const &src)
{
	std::cout << "Cure assignation operator called" << std::endl;
	_type = src._type;
	return *this;
}