/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:12:33 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/11 00:35:39 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	
	while (getline(std::cin, input) && !std::cin.eof())
	{
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
		{
			Contact contact;
			contact.init_contact();
			break;
		}
		if (input.find("SEARCH") == 0)
		{
			char *argument;
			input.copy(argument, input.length() - 7,  7);
			PhoneBook.search_contact(argument);
		}
	}
	return (0);
}