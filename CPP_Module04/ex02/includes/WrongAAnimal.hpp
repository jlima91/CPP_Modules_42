/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 11:41:19 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WrongAAnimal__
# define __WrongAAnimal__

# include <iostream>


// ************************************************************************** //
//                               WrongAAnimal Class                                 //
// ************************************************************************** //

class WrongAAnimal
{
protected:
	std::string type;

public:
	WrongAAnimal();
	~WrongAAnimal();
	WrongAAnimal&   operator=(const WrongAAnimal& copy);
	WrongAAnimal(const WrongAAnimal &copy);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif /* __WrongAAnimal__ */
