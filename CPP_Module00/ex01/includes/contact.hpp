/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:53:50 by joao              #+#    #+#             */
/*   Updated: 2022/11/11 18:40:26 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
 #define CONTACT_HPP

 #include <iostream>
 #include <string>
 #include <iomanip>
 #include <limits>

class CONTACT
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_num;
        std::string darkest_secret;
    public:
        void details();
        void display_contacts(size_t i);
        void display_contact();
};

#endif