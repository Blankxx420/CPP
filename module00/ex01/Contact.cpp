/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 23:13:44 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/10 23:43:37 by brguicho         ###   ########.fr       */
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
		if (input.empty() || std::cin.eof())
			valid = false;
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
		return (1);
	this->_lastname = input;
	input = this->_get_input("Enter your nickname: ");
	if (input.empty())
		return (1);
	this->_nickname = input;
	input = this->_get_input("Enter your phone number: ");
	if (input.empty())
		return (1);
	this->_phone_number = input;
	input = this->_get_input("Enter your darkest secret: ");
	if (input.empty())
		return (1);
	this->_darkest_secret = input;
	return (0);
}