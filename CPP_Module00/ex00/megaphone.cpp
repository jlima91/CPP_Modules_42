/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao <joao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:20:53 by joao              #+#    #+#             */
/*   Updated: 2022/08/24 13:10:26 by joao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MEGAPHONE
{
    public:
        int i;
        int c;
        MEGAPHONE(int argc, char *argv[])
        {
            if (argc == 1)
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
            else
            {
                i = 0;
                while (++i < argc)
                {
                    c = -1;
                    while (argv[i][++c])
                    {
                        if (argv[i][c] >= 'a' && argv[i][c] <= 'z')
                            argv[i][c] = argv[i][c] - 32; 
                    }
                    std::cout << argv[i];
                }
            }
            std::cout << std::endl;
        }
};

int main (int argc, char *argv[])
{
    MEGAPHONE(argc, argv); 
    return 0;
}