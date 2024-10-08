/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:37:51 by brguicho          #+#    #+#             */
/*   Updated: 2024/09/11 13:52:52 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contact[8];
		int		_index;
		bool 	_is_digit(char c);
		bool	_check_search_input(std::string input);
		void	_search_contact(int id);
	public:
		PhoneBook();
		~PhoneBook();
		int add_contact();
		void welcome_menu();
		void print_contact();
};
#endif