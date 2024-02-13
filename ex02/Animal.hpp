/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:11:37 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/12 13:15:27 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal &operator=(const Animal &src);

		std::string getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};

#endif