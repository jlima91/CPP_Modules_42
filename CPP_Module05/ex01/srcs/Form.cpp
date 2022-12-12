/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* When default constructer is private no need to initialize it */

Form::Form(std::string formName, int gradeSign): _formName(formName),
    _gradeSign(gradeSign), _gradeExecute(25)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw Form::GradeTooHighException();
    if (_gradeSign > 150 || _gradeExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "[ Form ] - " << _formName << " - constructor called!" 
        << std::endl;
}

Form::~Form()
{
    std::cout << "[ Form ] - " << _formName << " - deconstructor called!" 
        << std::endl;
}

/* Assigning, " = ", between classes will copy if "signed" or not */
Form&   Form::operator=(const Form& rhs) 
{
    if (this != &rhs)
        _signed = rhs.getSigned();
    return *this;
}

Form::Form( const Form& copy ): _formName(copy.getFormName()),
    _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute()){
    std::cout << "[ Form ]" << this->_formName << " has been copied with copy constuctor."
        << std::endl;
}

std::string Form::getFormName() const{
    return (_formName);
}

int Form::getGradeSign() const{
    return (_gradeSign);
}

int Form::getGradeExecute() const{
    return (_gradeExecute);
}

bool Form::getSigned() const{
    return (_signed);
}

void Form::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > getGradeSign())
        throw Bureaucrat::GradeTooLowException();
    else
        _signed = 1;
}

std::ostream& operator<<(std::ostream& output, const Form& rhs){
    output << rhs.getFormName() << ", grade needed to sign " << rhs.getGradeSign();
    return (output);
}