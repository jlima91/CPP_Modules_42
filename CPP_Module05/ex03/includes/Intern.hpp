/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/12 10:11:00 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Intern__
# define __Intern__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


// ************************************************************************** //
//                               Intern Class                             //
// ************************************************************************** //

class Form;
class PresidentialPardonForm;

class Intern
{
public:
	Intern();	
	Intern(int grade, std::string name);
	~Intern();
	Intern(const Intern &copy);

	Intern&   operator=(const Intern& copy);

	Form* makeForm(std::string formName, std::string target);
};

#endif /* __Intern__ */
