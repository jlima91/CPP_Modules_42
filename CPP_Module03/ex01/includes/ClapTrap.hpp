/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/06 11:39:41 by jlima            ###   ########.fr       */
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
	ClapTrap&   operator=(const ClapTrap& copy);
	ClapTrap(const ClapTrap &copy);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif /* __CLAPTRAP__ */
