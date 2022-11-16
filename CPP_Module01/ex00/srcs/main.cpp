/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/11/16 15:44:58 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main ()
{
    Zombie *zombie = newZombie("Fredo"); //Pointer to object zombie from Class Zombie is given a memory address
    zombie->announce(); //object created announces itself
    randomChump("Adolf");
    delete zombie;
    return (0);
}