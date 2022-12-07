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


#ifndef __WrongAnimal__
# define __WrongAnimal__

# include <iostream>


// ************************************************************************** //
//                               WrongAnimal Class                                 //
// ************************************************************************** //

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal&   operator=(const WrongAnimal& copy);
	WrongAnimal(const WrongAnimal &copy);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif /* __WrongAnimal__ */
