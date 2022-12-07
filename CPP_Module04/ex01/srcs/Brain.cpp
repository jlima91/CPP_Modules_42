/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 11:14:25 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "A soul is born." << std::endl;
}

Brain::~Brain()
{
    std::cout << "A soul just left us." << std::endl;
}

Brain&   Brain::operator=(const Brain& copy) 
{
    std::cout << "[ Brain ] has been copied with copy assignment operator." << std::endl;
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::Brain( const Brain& copy ) 
{
    *this = copy;
    std::cout << "[ Brain ] has been copied with copy constuctor." << std::endl;
}