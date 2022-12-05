/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 16:56:35 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot("Joca");
	bot.attack("Goblin");
	bot.takeDamage(10);
	bot.beRepaired(2);
	bot.takeDamage(10);
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.takeDamage(2);
	bot.attack("Goblin");
	bot.guardGate();
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	return (0);
}


