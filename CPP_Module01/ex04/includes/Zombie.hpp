/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/11/16 16:35:17 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
# include <string>
# include <iostream>

// ************************************************************************** //
//                               Zombie Class                                //
// ************************************************************************** //

class Zombie 
{
private:
	std::string name;
public:
	~Zombie(void);
	void assigning_name(std::string name);
	void announce(void);
};

#endif /* __ZOMBIE_H__ */
