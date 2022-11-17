/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 11:40:07 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMAN_B__
# define __HUMAN_B__
# include <string>
# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanB Class                                //
// ************************************************************************** //

class HumanB
{
private:
	std::string _name;
	Weapon *weapon_object;
public:
	HumanB(std::string name);
	~HumanB(void);
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif /* __HUMAN_B__ */
