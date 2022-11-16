/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:56:57 by joao              #+#    #+#             */
/*   Updated: 2022/11/11 18:12:51 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    PHONEBOOK phonebook;
    std::string str;
    while (1)
    {
        phonebook.startup();
        std::cin >> str;
        if (str == "ADD" || str == "add")
            phonebook.adding_contact();
        if (str == "SEARCH" || str == "search")
            phonebook.searching_contact();
        if (str == "EXIT" || str == "exit")
            break;
    }
        return 0;
}