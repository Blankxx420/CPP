/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 23:05:31 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/25 22:22:06 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange bitcoin(argv[1]);
		bitcoin.parse_file("data.csv", bitcoin.get_map());
	}
	else
		std::cerr << "Error : Wrong number of arguments" << std::endl;
}