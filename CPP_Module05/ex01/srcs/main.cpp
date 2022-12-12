/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/09 08:51:14 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    std::cout << "--------------- Bureaucrat ---------------" << std::endl;

    try
    {
        Bureaucrat employe(16, "Joe");
        Form form("Out of Prison Doc", 10);

        std::cout << employe << std::endl;
        std::cout << form << std::endl;
        employe.signForm(form);
        employe.incrementGrade();
    }
    catch (Bureaucrat::GradeTooLowException e)
    {
        std::cout << "Caught MyCustomException" << std::endl;
        std::cout << e.what();
        /* handle exception */
    }
    catch (Bureaucrat::GradeTooHighException e)
    {
        std::cout << "Caught MyCustomException" << std::endl;
        std::cout << e.what();
        /* handle exception */
    }
    return 0;
}

