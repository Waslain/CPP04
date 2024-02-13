/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:54:29 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/12 17:58:19 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &copy);
		virtual ~Ice();

		virtual Ice* clone() const;
		virtual void use(ICharacter &target);
		
		Ice &operator=(Ice const &src);
};