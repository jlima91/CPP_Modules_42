/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 12:35:44 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap game;
	game.attack("Goblin");
	game.takeDamage(10);
	game.beRepaired(2);
	game.takeDamage(10);
	game.attack("Goblin");
	game.attack("Goblin");
	game.attack("Goblin");
	game.takeDamage(2);
	game.attack("Goblin");
	game.attack("Goblin");
	game.attack("Goblin");
	game.attack("Goblin");
	game.attack("Goblin");
	return (0);
}


