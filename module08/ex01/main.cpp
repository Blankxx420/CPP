/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:38:48 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/18 23:39:40 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp = Span(10);
	sp.addNumber(6);

	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(17);
	numbers.push_back(9);
	numbers.push_back(11);
	
	sp.addRange(numbers.begin(), numbers.end());
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	return 0;
}