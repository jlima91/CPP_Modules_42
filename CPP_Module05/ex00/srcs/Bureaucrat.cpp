/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(int grade, std::string name): _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "[ Bureaucrat ] - " << this->_name << " - constructor called!" 
        << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[ Bureaucrat ] - " << this->_name << " - deconstructor called!" 
        << std::endl;
}

Bureaucrat&   Bureaucrat::operator=(const Bureaucrat& copy) 
{
    std::cout << "[ Bureaucrat ]" << this->_name << " has been copied with copy assignment operator."
        << std::endl;
    if (this != &copy)
        this->_grade = copy._grade;
    return *this;
}

Bureaucrat::Bureaucrat( const Bureaucrat& copy ) 
{
    *this = copy;
    std::cout << "[ Bureaucrat ]" << this->_name << " has been copied with copy constuctor."
        << std::endl;
}

std::string Bureaucrat::getName() const{
    return (_name);
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

void Bureaucrat::incrementGrade(){
    if ( _grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade(){
    if ( _grade + 1 > 150 )
       throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& rhs){
    output << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return (output);
}