/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:28:39 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/21 11:19:59 by brguicho         ###   ########.fr       */
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
	
	if (argc == 2) {
		displayHeader(argv[1]);
		ScalarConverter::convert(argv[1]);
	}
	return 0;
}