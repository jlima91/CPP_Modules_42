/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/09 10:34:52 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ShrubberyCreationForm__
# define __ShrubberyCreationForm__

#include "Form.hpp"
#include <fstream>


// ************************************************************************** //
//                         ShrubberyCreationForm Class                        //
// ************************************************************************** //


class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
	
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	ShrubberyCreationForm&   operator=(const ShrubberyCreationForm& copy);

	std::string getTarget() const;

	void execute( const Bureaucrat& executor ) const;
};

std::ostream& operator<<(std::ostream& output, const ShrubberyCreationForm& rhs);

#endif /* __ShrubberyCreationForm__ */
