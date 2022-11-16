/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:21:01 by jlima             #+#    #+#             */
/*   Updated: 2022/11/11 18:35:12 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void CONTACT::details()
        {
            std::cout << "All fields are mandatory." << std::endl;
            std::cout << "First name: ";
            std::cin >> first_name;
            std::cout << "Last name: ";
            std::cin >> last_name;
            std::cout << "Nickname: ";
            std::cin >> nickname;
            std::cout << "Phone number: ";
            std::cin >> phone_num;
            std::cout << "Darkest secret: ";
            std::cin >> darkest_secret;
        }

void CONTACT::display_contacts(size_t i)
        {
            std::cout << "|" << std::setw(10) << ++i;
            if (first_name.length() > 10)
                std::cout << "|" << first_name.substr(0, 9) << ".";
            else
                std::cout << "|" << std::setw(10) << first_name;
            if (last_name.length() > 10)
                std::cout << "|" << last_name.substr(0, 9) << ".";
            else
                std::cout << "|" << std::setw(10) << last_name;
            if (nickname.length() > 10)
                std::cout << "|" << nickname.substr(0, 9) << ".";
            else
                std::cout << "|" << std::setw(10) << nickname << "|" << std::endl;
        }

void CONTACT::display_contact()
        {
            std::cout << first_name << std::endl;
            std::cout << last_name << std::endl;
            std::cout << nickname << std::endl;
            std::cout << phone_num << std::endl;
            std::cout << darkest_secret << std::endl;
        }