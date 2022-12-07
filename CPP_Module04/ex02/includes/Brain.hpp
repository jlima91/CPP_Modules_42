/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/07 10:30:17 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Brain__
# define __Brain__

# include <iostream>


// ************************************************************************** //
//                               Brain Class                   	              //
// ************************************************************************** //

class Brain
{
protected:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain&   operator=(const Brain& copy);
	Brain(const Brain &copy);
	
};

#endif /* __Brain__ */
