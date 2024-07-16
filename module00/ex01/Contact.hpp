/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:46:12 by brguicho          #+#    #+#             */
/*   Updated: 2024/07/16 12:13:58 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
# define Contact_HPP

#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ios>

class Contact
{
private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	std::string _get_input(const char *str);
	
public:
	Contact() {};
	~Contact() {};
	int init_contact();
	void print_information(int index);
};

#endif