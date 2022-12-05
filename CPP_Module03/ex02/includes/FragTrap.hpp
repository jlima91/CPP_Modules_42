/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:21:07 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FRAGTRAP__
# define __FRAGTRAP__

# include "ClapTrap.hpp"


// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

class FragTrap : public ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string str);
	~FragTrap();
	void highFivesGuys();
};

#endif /* __FRAGTRAP__ */
