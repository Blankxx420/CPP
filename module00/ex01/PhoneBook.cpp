/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 08:19:23 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/16 13:53:59 by brguicho         ###   ########.fr       */
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
	std::cout << "- EXIT : to quit and lost your contact" << std::endl;
}

void	PhoneBook::print_contact()
{
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << "    Id   " << std::setw(5) << std::setfill(' ');
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << "Firstname" << std::setw(5) << std::setfill(' ');
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << "Lastname " << std::setw(5) << std::setfill(' ');
	std::cout << "|" << std::setw(5) << std::setfill(' ') << "" << "Nickname " << std::setw(5) << std::setfill(' ') << '|' << std::endl;
	for (int i = 0 ; i < 8; i++)
		this->_contact[i].print_information(i);
}