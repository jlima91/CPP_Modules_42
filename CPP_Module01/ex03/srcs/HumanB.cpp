/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 11:46:40 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon_object = NULL;
    this->_name = name;
    std::cout << "HumanB " << name;
    std::cout << " created without a weapon" << std::endl;       
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << weapon_object->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_object = &weapon;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}