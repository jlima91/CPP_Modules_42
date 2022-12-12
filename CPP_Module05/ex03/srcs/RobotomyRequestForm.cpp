/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* When default constructer is private no need to initialize it */

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
    _target(target), Form( "RobotomyRequestForm", 72, 45){
    std::cout << "[ RobotomyRequestForm ] - constructor called!" 
        << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[ RobotomyRequestForm ] - deconstructor called!" 
        << std::endl;
}

RobotomyRequestForm&   RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& copy ):
    Form(copy), _target(copy._target){
    std::cout << "[ RobotomyRequestForm ] - copied with copy constuctor."
        << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
    return (_target);
}

void RobotomyRequestForm::execute( const Bureaucrat& executor ) const{
    if(getSigned()){
        if (executor.getGrade() <= getGradeExecute()){
            if (rand() % 2)
                std::cout << _target << " has been robotomized successfully." << std::endl;
            else
               std::cout << _target << " has not been robotomized successfully." << std::endl; 
        }
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::NotSigned();
}

std::ostream& operator<<(std::ostream& output, const RobotomyRequestForm& rhs){
    output << "Grade to sign " << rhs.getGradeSign() << ". Grade to execute " << rhs.getGradeExecute();
    return (output);
}