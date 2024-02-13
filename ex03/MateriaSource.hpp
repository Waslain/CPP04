/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:45:37 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/13 16:00:31 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();

		MateriaSource &operator=(const MateriaSource &src);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const &type);
	private:
		AMateria* _source[4];
};