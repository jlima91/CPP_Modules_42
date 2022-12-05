/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 18:04:25 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DIAMONDTRAP__
# define __DIAMONDTRAP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"


// ************************************************************************** //
//                               DiamondTrap Class                               //
// ************************************************************************** //

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
	DiamondTrap();

public:
	DiamondTrap(std::string str);
	~DiamondTrap();
	void whoAmI(void);
};

#endif /* __DIAMONDTRAP__ */
