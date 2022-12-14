/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 09:28:06 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Cat__
# define __Cat__

# include "Animal.hpp"


// ************************************************************************** //
//                               Cat Class                               //
// ************************************************************************** //

class Cat : public Animal
{
protected:
	

public:
	Cat();
	~Cat();
	
	void makeSound() const;
};

#endif /* __Cat__ */
