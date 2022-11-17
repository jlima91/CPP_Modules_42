/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:37:56 by jlima             #+#    #+#             */
/*   Updated: 2022/11/17 17:38:35 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main (int argc, char *argv[])
{
    std::ifstream infile;                //creating object of instream class
    std::ofstream outfile;               //creating object of ofstream class
    std::string str;
    char c;
    size_t i, pos;

    if (argc != 4)
    {
        std::cout << "This program accepts 3 parameters in the following ";
        std::cout << "order: a filename and two strings";
    }
    infile.open(argv[1], std::ios::in);   //opening file to read only from that object
    if (infile.fail())
	{
		std::cout << "Error: " << argv[1] << ":" << \
		" no such file or directory" << std::endl;
		return (1);
	}
    /* Loop to copy every character in "infile" to string "str" */
    while(infile.get(c))
        str += c;
    infile.close();
    outfile.open((std::string(argv[1]) + ".replace").c_str(), std::ios::out);
    if (outfile.fail())
	{
		std::cout << "Error making:";
		std::cout << std::string(argv[1]) << ".replace" << std::endl;
		return (1);
	}
    i = 0;
    while(i < str.size())
    {
        pos = str.find(argv[2], i);
        if(pos != -1)
        {
            while(i < pos)
                outfile << str[i++];
            if(i == pos)
                outfile << argv[3];
            i += strlen(argv[2]);
        }
        else
           outfile << str[i++];
    }
    outfile.close();
    return (0);
}
