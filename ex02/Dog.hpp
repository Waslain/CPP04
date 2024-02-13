/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:31:04 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 15:48:50 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();

		Dog &operator=(const Dog &src);

		void makeSound() const;
		Brain* getBrain() const;
	private:
		Brain* _brain;
};

#endif