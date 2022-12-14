/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 10:20:02 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Dog__
# define __Dog__

# include "Animal.hpp"
# include "Brain.hpp"


// ************************************************************************** //
//                               Dog Class                               //
// ************************************************************************** //

class Dog :public Animal
{
protected:
	Brain* brain;

public:
	Dog();
	virtual ~Dog();
	Dog&   operator=(const Dog& copy);
	Dog(const Dog &copy);
	
	void makeSound() const;
};

#endif /* __Dog__ */
