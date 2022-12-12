/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/09 10:34:52 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __RobotomyRequestForm__
# define __RobotomyRequestForm__

#include "Form.hpp"


// ************************************************************************** //
//                          RobotomyRequestForm Class                         //
// ************************************************************************** //

class RobotomyRequestForm: public Form
{
private:
	std::string _target;
	
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	RobotomyRequestForm&   operator=(const RobotomyRequestForm& copy);

	std::string getTarget() const;

	void execute( const Bureaucrat& executor ) const;
};

std::ostream& operator<<(std::ostream& output, const RobotomyRequestForm& rhs);

#endif /* __RobotomyRequestForm__ */
