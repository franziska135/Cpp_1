/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:54:25 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:54:26 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream iFile;
    iFile.open (filename.c_str());
    if (iFile.is_open() == 0) {
        std::cerr   << "Error: "
                    << filename
                    << " could not be opened"
                    << std::endl;
        return 0;
    }
    std::string copy;
    std::string line;
    while (std::getline(iFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
        }

        copy += line;
        if (iFile.eof())
            break ;
        copy += '\n';
        
    }
    iFile.close();
    std::ofstream oFile;
    oFile.open ((filename + ".replace").c_str());
    if (!oFile.is_open())
    {
        std::cerr   << "Error: "
                    << filename
                    << " could not be opened"
                    << std::endl;
        return 0;
    }
    oFile << copy;
    oFile.close();
    return 1; 
}

int main(int argc, char **argv) 
{
    if (argc != 4)
    {
        std::cerr   << "Error: Invalid number of arguments\n"
                    << "Correct usage: ./a.out <filename> <string1> <string2>"
                    << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty())
    {
        std::cerr   << "Error: Empty string s1 is not allowed"
                    << std::endl;
        return 1;
    }
    if (replace(filename, s1, s2) != 0)
        return 1;
    return 0;
}
