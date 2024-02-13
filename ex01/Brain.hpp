/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:36:01 by fduzant           #+#    #+#             */
/*   Updated: 2024/02/10 14:36:47 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain{
  public:
    Brain();
    Brain(const Brain &copy);
    ~Brain();

    Brain &operator=(const Brain &src);

    std::string getIdea(const int i) const;
  private:
    std::string _idea[100];
};