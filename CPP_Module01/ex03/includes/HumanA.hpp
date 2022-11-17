/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 11:30:56 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __HUMAN_A__
# define __HUMAN_A__
# include <string>
# include <iostream>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanA Class                                //
// ************************************************************************** //

class HumanA 
{
private:
	std::string _name;
	Weapon &weapon_object;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack();
};

#endif /* __HUMAN_A__ */
