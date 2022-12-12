/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 09:28:43 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WrongCat__
# define __WrongCat__

# include "WrongAAnimal.hpp"


// ************************************************************************** //
//                               WrongCat Class                               //
// ************************************************************************** //

class WrongCat : public WrongAAnimal
{
protected:
	

public:
	WrongCat();
	~WrongCat();
	
	void makeSound() const;
};

#endif /* __WrongCat__ */
