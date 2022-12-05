/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 10:19:07 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HARL__
# define __HARL__

# include <iostream>


// ************************************************************************** //
//                               Harl Class                                   //
// ************************************************************************** //

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif /* __HARL__ */
