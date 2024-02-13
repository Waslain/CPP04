/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:55:18 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:34:42 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Default MateriaSource deconstructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_source[i] != NULL)
			delete _source[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	std::cout << "MateriaSource operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != NULL)
			delete _source[i];
		if (src._source[i] != NULL)
			_source[i] = src._source[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (_source[i] != NULL && i < 4)
		i++;
	if (i == 4)
		return;
	_source[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type.compare("ice") != 0 && type.compare("cure") != 0)
		return NULL; // Materia type unknown
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] != NULL && type.compare(_source[i]->getType()) == 0)
			return _source[i]->clone();
	}
	return NULL;
}