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
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	
	int 	getRawBits( void ) const;
	void 	setRawBits( int const raw );

};

#endif /* __FIXED__ */
