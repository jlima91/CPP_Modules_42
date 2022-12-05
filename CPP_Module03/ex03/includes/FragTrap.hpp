/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 18:15:20 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FRAGTRAP__
# define __FRAGTRAP__

# include "ClapTrap.hpp"


// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

class FragTrap : virtual public ClapTrap
{
protected:
	FragTrap();

public:
	FragTrap(std::string str);
	~FragTrap();
	void highFivesGuys();
};

#endif /* __FRAGTRAP__ */
