/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:37:55 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 15:36:38 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria &copy);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &src);

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		std::string _type;
};