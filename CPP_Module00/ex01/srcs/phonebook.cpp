/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:21:10 by jlima             #+#    #+#             */
/*   Updated: 2022/11/11 18:51:43 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PHONEBOOK::PHONEBOOK()
{
    contact_count = 0;
    oldest_contact = 0;
}

void PHONEBOOK::startup(void)
{
    std::cout << "Enter one of three commands: ADD, SEARCH or EXIT" << std::endl;
}

void PHONEBOOK::adding_contact(void)
{
    std::cout << contact_count << std::endl;
    if(contact_count < 8)
        contact[contact_count++].details();
    else
    {
        contact[oldest_contact++].details();   
        if (oldest_contact == 8)
            oldest_contact = 0;
    }
}

void PHONEBOOK::searching_contact(void)
{
    size_t i;
    std::cout << contact_count << std::endl;
    if(!contact_count)
            std::cout << "Add a contact first please." << std::endl;
    else
    {
        i = -1;
        while (++i < contact_count)
            contact[i].display_contacts(i);
        std::cout << "Insert the index of the contact you would like to see in detail: ";
        if (!(std::cin >> i) || i < 0 || i > contact_count)
        {
            std::cout << "Index not valid or no contact stored." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
            contact[--i].display_contact();
    }            
}
