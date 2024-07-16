/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 23:13:44 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/16 13:55:22 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_get_input(const char *str)
{
	std::string input;
	bool		valid;
	
	valid = true;
	std::cout << str << std::flush;
	while (valid)
	{
		std::getline(std::cin, input);
		if (input.empty() || std::cin.eof() || input == "")
		{
			valid = false;
		}	
		else return (input);
	}
	return (input);
}

int  Contact::init_contact()
{
	std::string input;
	
	input = this->_get_input("Enter your firstname: ");
	if (input.empty())
		return (1);
	this->_firstname = input;
	input = this->_get_input("Enter your lastname: ");
	if (input.empty())
	{
		this->_firstname.clear();
		return (1);
	}
	this->_lastname = input;
	input = this->_get_input("Enter your nickname: ");
	if (input.empty())
	{
		this->_firstname.clear();
		this->_lastname.clear();
		return (1);
	}
	this->_nickname = input;
	input = this->_get_input("Enter your phone number: ");
	if (input.empty())
	{
		this->_firstname.clear();
		this->_lastname.clear();
		this->_nickname.clear();
		return (1);
	}
	this->_phone_number = input;
	input = this->_get_input("Enter your darkest secret: ");
	if (input.empty())
	{
		this->_firstname.clear();
		this->_lastname.clear();
		this->_nickname.clear();
		this->_phone_number.clear();
		return (1);
	}
	this->_darkest_secret = input;
	return (0);
}

void	Contact::print_information(int index)
{
	std::cout << "|" << std::setw(9) << std::setfill(' ') << "" << index << std::setw(9) << std::setfill(' ') << std::flush;
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << this->_firstname << std::setw(5) << std::setfill(' ');
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << this->_lastname << std::setw(5) << std::setfill(' ');
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << this->_nickname << std::setw(5) << std::setfill(' ') << std::endl;
}