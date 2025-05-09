/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:28:39 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/08 18:28:41 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

void displayHeader(const std::string& literal) {
	std::cout << "=====================================" << std::endl;
	std::cout << "Testing conversion for: " << literal << std::endl;
	std::cout << "=====================================" << std::endl;
}

int main(int argc, char **argv) {

	(void)argv; 
	if (argc == 1) {
		displayHeader("'c'");
		ScalarConverter::convert("'c'");
		
		displayHeader("42");
		ScalarConverter::convert("42");
		
		displayHeader("-42");
		ScalarConverter::convert("-42");
		
		displayHeader("4.2f");
		ScalarConverter::convert("4.2f");
		
		displayHeader("-4.2f");
		ScalarConverter::convert("-4.2f");
		
		displayHeader("4.2");
		ScalarConverter::convert("4.2");
		
		displayHeader("-4.2");
		ScalarConverter::convert("-4.2");
		
		displayHeader("nan");
		ScalarConverter::convert("nan");
		
		displayHeader("+inf");
		ScalarConverter::convert("+inf");
		
		displayHeader("-inf");
		ScalarConverter::convert("-inf");
		
		displayHeader("nanf");
		ScalarConverter::convert("nanf");
		
		displayHeader("+inff");
		ScalarConverter::convert("+inff");
		
		displayHeader("-inff");
		ScalarConverter::convert("-inff");
		
		displayHeader("invalid");
		ScalarConverter::convert("invalid");
	}
	
	return 0;
}