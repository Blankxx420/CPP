/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:12:33 by brguicho          #+#    #+#             */
/*   Updated: 2024/09/11 12:32:51 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	
	PhoneBook.welcome_menu();
	while (std::getline(std::cin, input) && !std::cin.eof())
	{
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
		{
			if (PhoneBook.add_contact() == 1)
			{
				std::cerr << "Aborted one or more field are empty" << std::endl;	
			}
			else
				std::cout << "Contact added" << std::endl;	
		}
		if (input == "SEARCH")
		{
			PhoneBook.print_contact();
		}
	}
	return (0);
}