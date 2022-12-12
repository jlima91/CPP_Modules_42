/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* When default constructer is private no need to initialize it */

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
    _target(target), Form( "PresidentialPardonForm", 25, 5){
    std::cout << "[ PresidentialPardonForm ] - constructor called!" 
        << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[ PresidentialPardonForm ] - deconstructor called!" 
        << std::endl;
}

PresidentialPardonForm&   PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& copy ): 
    Form(copy), _target(copy._target){
    std::cout << "[ PresidentialPardonForm ] - copied with copy constuctor."
        << std::endl;
}

std::string PresidentialPardonForm::getTarget() const{
    return (_target);
}

void PresidentialPardonForm::execute( const Bureaucrat& executor ) const{
    if(getSigned()){
        if (executor.getGrade() <= getGradeExecute())
            std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::NotSigned();
}

std::ostream& operator<<(std::ostream& output, const PresidentialPardonForm& rhs){
    output << "Grade to sign " << rhs.getGradeSign() << ". Grade to execute " << rhs.getGradeExecute();
    return (output);
}