/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:50:44 by joao              #+#    #+#             */
/*   Updated: 2022/11/11 18:33:36 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PHONEBOOK
{
    private:
        CONTACT contact[8];
        size_t contact_count;
        size_t oldest_contact;
    
    public:
        PHONEBOOK();
        void startup(void);
        void adding_contact(void);
        void searching_contact(void);
};

#endif