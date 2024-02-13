/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:44:07 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 15:42:59 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default brain constructor called" << std::endl;
    for (int i = 0; i < 10; i++)
        _idea[i] = "Ideaaaaaa";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Default brain deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain copy assignment called" << std::endl;
    for (int i = 0; i < 100; i++)
        _idea[i] = src.getIdea(i);
    return *this;
}

std::string Brain::getIdea(const int i) const
{
    if (i >= 0 && i < 100)
        return _idea[i];
    else{
        std::cout << "Brain ERROR, index out of range" << std::endl;
        return "";
    }
}