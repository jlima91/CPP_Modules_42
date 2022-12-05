/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:17:57 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap bot("Rodolf");
	bot.attack("Goblin");
	bot.takeDamage(10);
	bot.beRepaired(2);
	bot.takeDamage(10);
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.takeDamage(2);
	bot.attack("Goblin");
	bot.highFivesGuys();
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	bot.attack("Goblin");
	return (0);
}


