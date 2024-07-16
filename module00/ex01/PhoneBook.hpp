/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:37:51 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/13 09:56:11 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <ios>

class PhoneBook
{
	private:
		Contact _contact[8];
		int		_index = 0;
	public:
		PhoneBook() {}
		~PhoneBook() {
			std::cout << "See you soon!" << std::endl;
		}
		int add_contact();
		void welcome_menu();
		void search_contact();
		void print_contact();
};
#endif