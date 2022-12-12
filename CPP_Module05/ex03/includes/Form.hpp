/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/12 18:09:04 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __Form__
# define __Form__

#include "Bureaucrat.hpp"


// ************************************************************************** //
//                               Form Class                           		  //
// ************************************************************************** //

class Bureaucrat;

class Form
{
private:
	const std::string _formName;
	const int _gradeSign;
	const int _gradeExecute;
	bool _signed;
	
	Form();

public:
	Form(std::string formName, int gradeSign, int _gradeExecute);
	Form(const Form &copy);
	virtual ~Form();

	Form&   operator=(const Form& copy);

	std::string getFormName() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	bool getSigned() const;
	void beSigned(Bureaucrat& bureaucrat);

	virtual void execute( const Bureaucrat& executor ) const = 0;

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

	class NotSigned : public std::exception
	{
		public:
			virtual const char* what () const throw() { return "Document not signed!"; }
	};
};

std::ostream& operator<<(std::ostream& output, const Form& rhs);

#endif /* __Form__ */
