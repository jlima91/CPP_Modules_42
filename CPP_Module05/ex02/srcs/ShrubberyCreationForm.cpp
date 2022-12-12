/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:53 by jlima             #+#    #+#             */
/*   Updated: 2022/12/05 17:18:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* When default constructer is private no need to initialize it */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
    _target(target), Form( "ShrubberyCreationForm", 145, 137){
    std::cout << "[ ShrubberyCreationForm ] - constructor called!" 
        << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[ ShrubberyCreationForm ] - deconstructor called!" 
        << std::endl;
}

ShrubberyCreationForm&   ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& copy ):
    Form(copy), _target(copy._target){
    std::cout << "[ ShrubberyCreationForm ] - copied with copy constuctor."
        << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const{
    return (_target);
}

void ShrubberyCreationForm::execute( const Bureaucrat& executor ) const{
    if(getSigned()){
        if (executor.getGrade() <= getGradeExecute()){
            std::ofstream file((_target + "_shrubbery"), std::ofstream::out);
            file << "                      ___" << std::endl;
            file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
            file << "             ,-'          __,,-- \\" << std::endl;
            file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
            file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
            file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
            file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
            file << "     (     ,-'                  `." << std::endl;
            file << "      `._,'     _   _             ;" << std::endl;
            file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
            file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
            file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
            file << "                \"Hb HH dF" << std::endl;
            file << "                 \"HbHHdF" << std::endl;
            file << "                  |HHHF" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  |HHH|" << std::endl;
            file << "                  dHHHb" << std::endl;
            file << "                .dFd|bHb.               o" << std::endl;
            file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
            file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
            file << "##########################################" << std::endl;
            file.close();
            std::cout << _target << " executed successfully." << std::endl;
        }
        else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::NotSigned();
}


std::ostream& operator<<(std::ostream& output, const ShrubberyCreationForm& rhs){
    output << "Grade to sign " << rhs.getGradeSign() << ". Grade to execute " << rhs.getGradeExecute();
    return (output);
}