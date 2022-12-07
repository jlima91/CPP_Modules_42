/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 11:33:30 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}

/* num shift left 8 bits                                                      */
Fixed::Fixed(const int num): fixed_point(num << fractional_bits)
{
     std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num): fixed_point(std::roundf(num * (1 << fractional_bits)))
{
     std::cout << "Float constructor called" << std::endl;
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
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

int     Fixed::toInt(void) const 
{
    return (this->fixed_point >> this->fractional_bits);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return o;
}