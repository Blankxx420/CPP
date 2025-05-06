/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:18:06 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/06 02:14:51 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <cctype>
#include <cmath>
#include "utils.cpp"


enum LiteralType {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

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
