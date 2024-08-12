/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:46:12 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/12 20:46:45 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
# define Contact_HPP

#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>
#include <ios>
#include <sstream>

class Contact
{
private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	std::string _get_input(const char *str);
	std::string _truncate(std::string str, size_t width);
	
public:
	Contact() {};
	~Contact() {};
	int		init_contact();
	void	print_basic_information(int index);
	void	print_all_information(void);
};

#endif