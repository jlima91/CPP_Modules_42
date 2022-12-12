/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:59:48 by jlima             #+#    #+#             */
/*   Updated: 2022/12/09 10:34:52 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __PresidentialPardonForm__
# define __PresidentialPardonForm__

#include "Form.hpp"


// ************************************************************************** //
//                         PresidentialPardonForm Class                       //
// ************************************************************************** //

class PresidentialPardonForm: public Form
{
private:
	const std::string _target;
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);

	PresidentialPardonForm&   operator=(const PresidentialPardonForm& copy);

	std::string getTarget() const;
	void execute( const Bureaucrat& executor ) const;
};

std::ostream& operator<<(std::ostream& output, const PresidentialPardonForm& rhs);


#endif /* __PresidentialPardonForm__ */
