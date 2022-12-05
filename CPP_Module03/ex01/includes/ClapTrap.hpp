/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 16:41:52 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CLAPTRAP__
# define __CLAPTRAP__

# include <iostream>


// ************************************************************************** //
//                               ClapTrap Class                               //
// ************************************************************************** //

class ClapTrap
{
protected:
	std::string name;
	int hit_points;
	int energy_points;
	int damage;

	ClapTrap();

public:
	ClapTrap(std::string str);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* __CLAPTRAP__ */
