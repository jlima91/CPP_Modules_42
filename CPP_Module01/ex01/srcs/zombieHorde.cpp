/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/11/16 16:44:56 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;
    horde = new Zombie[N]; //allocating memory for an array of N members of class Zombie 
    while(N--)
        horde[N].assigning_name(name);
    return (horde);
}