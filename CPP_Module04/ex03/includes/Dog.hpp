/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 09:28:48 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Dog__
# define __Dog__

# include "AAnimal.hpp"
# include "Brain.hpp"


// ************************************************************************** //
//                               Dog Class                               //
// ************************************************************************** //

class Dog :public AAnimal
{
protected:
	Brain* brain;

public:
	Dog();
	~Dog();
	Dog&   operator=(const Dog& copy);
	Dog(const Dog &copy);
	
	void makeSound() const;
};

#endif /* __Dog__ */
