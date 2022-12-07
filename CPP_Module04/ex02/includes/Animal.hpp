/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 11:41:19 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Animal__
# define __Animal__

# include <iostream>


// ************************************************************************** //
//                               Animal Class                                 //
// ************************************************************************** //

class Animal
{
protected:
	std::string type;

public:
	Animal();
	virtual ~Animal();
	Animal&   operator=(const Animal& copy);
	Animal(const Animal &copy);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif /* __Animal__ */
