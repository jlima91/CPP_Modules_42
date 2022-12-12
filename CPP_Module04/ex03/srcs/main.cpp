/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 09:28:33 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main( void )
{
    std::cout << "--------------- AAnimal ---------------" << std::endl;

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    
    Dog basic;
    {
        Dog tmp = basic;
    }

    const AAnimal* AAnimals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) 
    {
        delete AAnimals[i];
    }
    
    return 0;
}

/*
 - By definition, an abstract class in C++ is a class that has at least one pure virtual
function (i.e., a function that has no definition). The classes inheriting the abstract
class must provide a definition for the pure virtual function; otherwise, the subclass
would become an abstract class itself.

 - Abstract classes are essential to providing an abstraction to the code to make it 
reusable and extendable.
*/