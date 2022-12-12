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


#ifndef __AAnimal__
# define __AAnimal__

# include <iostream>


// ************************************************************************** //
//                               AAnimal Class                                 //
// ************************************************************************** //

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string str);
	virtual ~AAnimal();
	AAnimal&   operator=(const AAnimal& copy);
	AAnimal(const AAnimal &copy);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif /* __AAnimal__ */
