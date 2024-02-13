/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:56:38 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:41:47 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default Character")
{
	std::cout << "Default Character constructor called" << std::endl;
	_loadinventory();
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << _name << " Character created" << std::endl;
	_loadinventory();
}

Character::Character(const Character &copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != NULL)
			delete _inventory[i];
	std::cout << "Default Character deconstructor called" << std::endl;
}

Character &Character::operator=(const Character &src)
{
	std::cout << "Character assignation operator called" << std::endl;
	_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
		if (src._inventory[i] != NULL)
			_inventory[i] = src._inventory[i]->clone();
	}
	return *this;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && _inventory[i] != NULL)
		i++;
	if (i == 4)
		return;
	if (_inventory[i] == NULL)
		_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 4)
	{
		if (_inventory[idx] != NULL)
		{
			std::cout << getName() << " ";
			_inventory[idx]->use(target);
		}
	}
}

std::string const &Character::getName() const
{
	return _name;
}

void	Character::_loadinventory()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}