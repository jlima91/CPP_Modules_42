/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 11:01:59 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Cat__
# define __Cat__

# include "Animal.hpp"
# include "Brain.hpp"


// ************************************************************************** //
//                               Cat Class                       	          //
// ************************************************************************** //

class Cat : public Animal
{
protected:
	Brain* brain;

public:
	Cat();
	~Cat();
	Cat&   operator=(const Cat& copy);
	Cat(const Cat &copy);
	
	void makeSound() const;
};

#endif /* __Cat__ */
