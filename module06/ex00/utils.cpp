/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:28:48 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/21 11:13:22 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


bool is_float_abs(double nombre) {
    return (floor(nombre) == nombre);
}

bool is_char(const std::string &literal)
{
	return (literal.length() == 1 && isalpha(literal[0]));
}

bool is_int(const std::string &literal)
{ 
	size_t i = 0;
	long int number;
	if (literal[0] == '+' || literal[0] == '-')
		i = 1;
	for (; i < literal.length() - 1; i++)
	{
		if (!std::isdigit(literal[i]))
		return (false);
	}
	if (i > 10)
		return (false);
	number = std::atol(literal.c_str());
	if (number > std::numeric_limits<int>::max() && number < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

bool is_float(const std::string &literal)
{
	size_t i = 0;
	bool hasDigits = false;
	bool hasDecimalPoint = false;
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		return true;
	if (literal.empty() || literal[literal.length() - 1] != 'f')
		return false;
	if (literal[0] == '+' || literal[0] == '-')
		i++;
	for (; i < literal.length() - 1; i++) 
	{
		if (isdigit(literal[i]))
			hasDigits = true;
		else if (literal[i] == '.' && !hasDecimalPoint)
			hasDecimalPoint = true;
		else 
			return false;
	}
	return hasDigits;
}

bool   is_double(const std::string& literal)
{
	size_t i = 0;
	bool hasDigits = false;
	bool hasDecimalPoint = false;
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return true;
	if (literal[0] == '+' || literal[0] == '-')
		i++;
	for (; i < literal.length(); i++)
	{
		if (isdigit(literal[i]))
			hasDigits = true;
		else if (literal[i] == '.' && !hasDecimalPoint)
			hasDecimalPoint = true;
		else
			return false;
	}
	
	return hasDigits && hasDecimalPoint;
}

int detect_type(const std::string &literal)
{
	if (is_double(literal))
		return (3);	
	else if (is_float(literal))
		return (2);
	else if (is_char(literal))
		return (0);
	else if (is_int(literal))
		return (1);
	return (4);
}

void convert_char(const std::string &literal)
{
	std::cout << "char: " << literal[0] << std::endl;
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
}

void convert_int(const std::string &literal)
{
	try
	{
		long long value = std::atoll(literal.c_str());
		if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible (overflow)" << std::endl;
			std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(value) << std::endl;
			return;
		}
		int i = static_cast<int>(value);
		std::cout << "int i: " << i << std::endl;
		if (i < 0 || i > 127)
			std::cout << "char: impossible" << std::endl;
		else if (i >= 0 && i <= 31)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: "<< static_cast<char>(value) << std::endl;
		std::cout << "int: " << i << std::endl;
		if (is_float_abs(static_cast<float>(value)) == false)
			std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
		if (is_float_abs(static_cast<double>(value)) == false)
			std::cout << "double: " << static_cast<double>(value) << std::endl;
		else
			std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void convert_float(const std::string &literal)
{
	try
	{
		std::string float_value = literal;
		if (literal == "nanf")
			float_value = "nan";
		else if (literal == "+inff")
			float_value = "+inf";
		else if (literal == "-inff")
			float_value = "-inf";
		else 
			float_value = literal.substr(0, literal.length() - 1);
		float f = static_cast<float>(atof(float_value.c_str()));
		if (std::isnan(f) || std::isinf(f) || f < 0 || f > 127)
			std::cout << "char: impossible" << std::endl;
		else if (f >= 0 && f <= 31)
			std::cout << "char: Non displayable" << std::endl;
		else
		std::cout << "char: "<< static_cast<char>(f) << std::endl;
		
		if (std::isnan(f) || std::isinf(f) || f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		
		if (is_float_abs(f) == false || std::isnan(f) || std::isinf(f))
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
		if (is_float_abs(static_cast<double>(f)) == false || std::isnan(f) || std::isinf(f))
			std::cout << "double: " << static_cast<double>(f) << std::endl;
		else
			std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void convert_double(const std::string& literal)
{
	try 
	{
		double d = atof(literal.c_str());
		
		// Affichage des conversions
		if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (d >= 0 && d <= 31)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		
		if (std::isnan(d) || std::isinf(d) || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		if (d < -std::numeric_limits<float>::max() || d > std::numeric_limits<float>::max())
			std::cout << "float: impossible" << std::endl;
		if (is_float_abs(static_cast<float>(d)) == false || std::isnan(static_cast<float>(d)) || std::isinf(static_cast<float>(d)))
			std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		if (is_float_abs(d) == false || std::isnan(d) || std::isinf(d))
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " <<  d << ".0" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
