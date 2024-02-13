/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:54:29 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/12 17:58:19 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const &copy);
		virtual ~Cure();

		virtual Cure* clone() const;
		virtual void use(ICharacter &target);
		
		Cure &operator=(Cure const &src);
};