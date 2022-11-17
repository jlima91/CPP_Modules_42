/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 11:13:35 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WEAPON__
# define __WEAPON__
# include <string>
# include <iostream>

// ************************************************************************** //
//                               Weapon Class                                //
// ************************************************************************** //

class Weapon 
{
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string& getType(void);
	void setType(std::string type);
};

#endif /* __WEAPON__ */
