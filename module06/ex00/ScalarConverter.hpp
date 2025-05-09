/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:18:06 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/06 14:01:09 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cctype>
#include <iomanip>


enum LiteralType {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

int detect_type(const std::string &literal);
bool is_char(const std::string &literal);
bool is_int(const std::string &literal);
bool is_float(const std::string &literal);
bool is_double(const std::string &literal);
void convert_char(const std::string &literal);
void convert_int(const std::string &literal);
void convert_float(const std::string &literal);
void convert_double(const std::string &literal);

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &rhs);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &rhs);
	public:
		static void convert(const std::string &objet_to_convert);
};

#endif