/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:38:21 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/06 01:37:26 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	*this = rhs; 
}
ScalarConverter::~ScalarConverter(){};


void ScalarConverter::convert(const std::string &literal)
{
	LiteralType type = detect_type(literal);
    
    switch (type)
	{
        case CHAR:
            convert_char(literal);
            break;
        case INT:
            convert_int(literal);
            break;
        case FLOAT:
            convert_float(literal);
            break;
        case DOUBLE:
            convert_double(literal);
            break;
        default:
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
    }
}