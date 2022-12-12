/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/12 10:11:00 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Bureaucrat__
# define __Bureaucrat__

# include <iostream>
# include <cstdlib>
#include "Form.hpp"


// ************************************************************************** //
//                               Bureaucrat Class                             //
// ************************************************************************** //

class Form;

class Bureaucrat
{
protected:
	const std::string _name;
	int _grade;

	Bureaucrat();

public:
	Bureaucrat(int grade, std::string name);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);

	Bureaucrat&   operator=(const Bureaucrat& copy);

	std::string getName() const;
	int getGrade() const;
	void signForm(Form& form);

	void incrementGrade();
	void decrementGrade();

	void executeForm(Form const & form);

/*	------------------------------- Exception ------------------------------- */

	class GradeTooLowException : public std::exception 
	{
		public:
			virtual const char* what () const throw() { return "Grade is too low!"; }
	};
	class GradeTooHighException : public std::exception 
	{
		public:
			virtual const char* what () const throw() { return "Grade is too high!"; }
	};
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& rhs);

#endif /* __Bureaucrat__ */

/*
C++ allows you to specify more than one definition for a function name or an
operator in the same scope, which is called function overloading and operator
overloading respectively.

An overloaded declaration is a declaration that is declared with the same name
as a previously declared declaration in the same scope, except that both
declarations have different arguments and obviously different definition
(implementation).

When you call an overloaded function or operator, the compiler determines the
most appropriate definition to use, by comparing the argument types you have
used to call the function or operator with the parameter types specified in the
definitions. The process of selecting the most appropriate overloaded function
or operator is called overload resolution.

You can redefine or overload most of the built-in operators available in C++.
Thus, a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names: the keyword "operator"
followed by the symbol for the operator being defined. Like any other function,
an overloaded operator has a return type and a parameter list.
*/