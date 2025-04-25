/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:38:21 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/17 10:57:08 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	*this = rhs; 
}
ScalarConverter::~ScalarConverter(){};

void ScalarConverter::convert(const std::string &object_to_convert)
{
	std::string type;
	type = typeid(object_to_convert).name();
	
}