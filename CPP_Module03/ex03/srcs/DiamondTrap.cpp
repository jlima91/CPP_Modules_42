/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 18:52:22 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI(void)
{
        std::cout << "I am DiamondTrap " << this->name <<
        " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str), FragTrap(str), ScavTrap(str)
{
    this->name = str;
    ClapTrap::name = str + "_clap_name";
    this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->damage = FragTrap::damage;
    std::cout << "DiamondTrap " << this->name << " is a ClapTrap Monster!!!" 
    << " Half Scav! Half Frag!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->name << " moster days are over." 
        << std::endl;
}
