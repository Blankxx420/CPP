/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 23:13:44 by brguicho          #+#    #+#             */
/*   Updated: 2024/09/11 14:12:40 by brguicho         ###   ########.fr       */
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

std::string Contact::_truncate(std::string str, size_t width)
{
	 if (str.length() > width)
            return str.substr(0, width - 1) + ".";
    return str;
}

void	Contact::print_basic_information(int index)
{
	std::cout	<< "|" << std::setw(10) << std::setfill(' ') << index
				<< "|" << std::setw(10) << std::setfill(' ') << _truncate(this->_firstname, 10)
				<< "|" << std::setw(10) << std::setfill(' ') << _truncate(this->_lastname, 10)
				<< "|" << std::setw(10) << std::setfill(' ') << _truncate(this->_nickname, 10) << "|" << std::endl;
}

void	Contact::print_all_information()
{
	if (this->_firstname.empty())
	{
		std::cerr << "No Contact at this ID" << std::endl;
		return ;
	}
	std::cout << "Firstname: " << this->_firstname << std::endl;
	std::cout << "Lastname: " << this->_lastname << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}