/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 12:40:03 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FIXED__
# define __FIXED__

# include <iostream>
# include <cmath>


// ************************************************************************** //
//                               Fixed Class                                  //
// ************************************************************************** //

class Fixed
{
private:
	int 				fixed_point;
	static const int 	fractional_bits = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	
	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif /* __FIXED__ */
