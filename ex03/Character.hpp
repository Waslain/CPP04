/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:21:58 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 15:36:13 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		virtual ~Character();

		Character &operator=(const Character &src);

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		std::string const &getName() const;
	private:
		std::string _name;
		AMateria* _inventory[4];
		void	_loadinventory();
};