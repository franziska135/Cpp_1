/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:52:50 by fmarggra          #+#    #+#             */
/*   Updated: 2024/08/28 09:52:52 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPtr = &str;
    std::string &stringRef = str;

    std::cout << "Memory address of string:\t" << &str << std::endl;
    std::cout << "Memory address of ptr to str:\t" << stringPtr << std::endl;
    std::cout << "Memory address of ref to str:\t" << &stringRef << std::endl;

    std::cout << "\nValue of string variable:\t" << str << std::endl;
    std::cout << "Value pointed to by strPtr:\t" << *stringPtr << std::endl;
    std::cout << "Value pointed to by stringRef:\t" << stringRef << std::endl;

    str = "Test";
    std::cout << "\n--------------------\n\nMemory address of string:\t" << &str << std::endl;
    std::cout << "Memory address of ptr to str:\t" << stringPtr << std::endl;
    std::cout << "Memory address of ref to str:\t" << &stringRef << std::endl;

    std::cout << "\nValue of string variable:\t" << str << std::endl;
    std::cout << "Value pointed to by strPtr:\t" << *stringPtr << std::endl;
    std::cout << "Value pointed to by stringRef:\t" << stringRef << std::endl;
}
