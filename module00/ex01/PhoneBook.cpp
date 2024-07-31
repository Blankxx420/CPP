/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 08:19:23 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/31 23:31:03 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::add_contact()
{
	if (this->_contact[_index % 8].init_contact() == 0)
		_index++;
	else
		return (1);
	return (0);
}

void	PhoneBook::welcome_menu(void)
{
	std::cout << "\e[0;32m" << "#" << std::setw(60) << std::setfill('#') << "" << '#' << std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(15) << std::setfill(' ') << "" << "Welcome To My Awesome PhoneBook" << std::setw(15) << std::setfill(' ') << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill(' ') << "" << '#' <<std::endl;
	std::cout << "#" << std::setw(60) << std::setfill('#') << "" << '#'  << std::endl << "\e[0;37m";
	std::cout << std::endl;
	std::cout << "You have the 3 following command to execute :" << std::endl;
	std::cout << "- ADD : you can add a contact" << std::endl;
	std::cout << "- SEARCH : display all contact and you can search for a specific one" << std::endl;
	std::cout << "- EXIT : to quit and lost your contact" << std::endl << std::endl;
}

bool	PhoneBook::_is_digit(char c)
{
	bool is_digit = false;
	if (c >= '0' && c <= '7')
		is_digit = true;
	return (is_digit);
}

bool	PhoneBook::_check_search_input(std::string input)
{
	bool valid = true;
	if (input.length() > 1 || input.empty())
	{
		valid = false;
		return (valid);
	}
	for (int i = 0; i < input.length(); i++)
	{
		if (_is_digit(input[i]) == false)
			valid = false;
			return (valid);
	}
	return (valid);
}

void	PhoneBook::_search_contact(int id)
{
	this->_contact[id].print_all_information();
}

void	PhoneBook::print_contact()
{
	std::string	input;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "|    Id   |       Firstname     |       Lastname      |       Nickname      |" << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	for (int i = 0 ; i < 8; i++)
		this->_contact[i].print_basic_information(i);
	std::cout << "-----------------------------------------------------------------------------" << std::endl << std::endl;
	std::cout << "Type the Id of the contact you search" << std::endl;
	while (std::getline(std::cin, input) && !std::cin.eof())
	{
		if (_check_search_input(input) == false)
		{
			std::cerr << "Error must be id beetween 0 and 7"<< std::endl;
		}
	 	else
		{
			_search_contact(std::stoi(input));
			break;
		}
	}
}