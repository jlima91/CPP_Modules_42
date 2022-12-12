/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/12/08 17:46:50 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    std::cout << "--------------- Bureaucrat ---------------" << std::endl;

    //Animal test;
    try
    {
        Bureaucrat j(100, "Joao");
        std::cout << j << std::endl;
        j.incrementGrade();
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

