/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "[ Intern ] - constructor called!" 
        << std::endl;
}

Intern::~Intern()
{
    std::cout << "[ Intern ] - deconstructor called!" 
        << std::endl;
}

Intern&   Intern::operator=(const Intern& copy) 
{
    std::cout << "[ Intern ] has been copied with copy assignment operator."
        << std::endl;
    (void) copy;
    return *this;
}

Intern::Intern( const Intern& copy ) 
{
    *this = copy;
    std::cout << "[ Intern ] has been copied with copy constuctor."
        << std::endl;
}

Form* Intern::makeForm(std::string formName, std::string target){
    std::string formNames[3] = {
        "robotomy request",
        "presidential request",
        "shrubbery request"
    };
    
    Form* forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    for(int i = 0; i < 3; i++) {
        if (formNames[i] == formName) {
            std::cout << "[ Intern ] creates " << formName << std::endl;
            return forms[i];
        }
    }
    std::cout << "There's no form by the name " << formName << std::endl;
    return (NULL);
}
