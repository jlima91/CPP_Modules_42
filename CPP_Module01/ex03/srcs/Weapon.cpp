/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:12:13 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 11:42:36 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;	
}

const std::string& Weapon::getType(void)
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
}