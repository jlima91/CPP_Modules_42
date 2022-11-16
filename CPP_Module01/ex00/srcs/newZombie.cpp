/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newzombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:47:34 by jlima             #+#    #+#             */
/*   Updated: 2022/11/16 15:44:59 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Aloocates memory for a new zombie and returns it */
Zombie* newZombie(std::string name){
    return (new Zombie(name));    //"new" allocates memory in c++ 
}