/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 16:55:43 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __SCAVTRAP__
# define __SCAVTRAP__

# include "ClapTrap.hpp"


// ************************************************************************** //
//                               ScavTrap Class                               //
// ************************************************************************** //

class ScavTrap : public ClapTrap
{
private:
	ScavTrap();

public:
	ScavTrap(std::string str);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);

};

#endif /* __SCAVTRAP__ */
