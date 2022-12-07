/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 12:37:03 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}

// Copy Constructor
/* If a new object has to be created before the copying can occur, the copy   */
/* constructor is used                                                        */
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called\n";
    this->fixed_point = copy.fixed_point;

}

// Assigning by overloading constructor
/* If a new object does not have to be created before the copying can occur,  */
/* the assignment operator is used.                                           */
Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &copy)
        this->fixed_point = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Distructor called\n";
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}