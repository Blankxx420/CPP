/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 23:05:31 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/26 10:00:02 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange bitcoin(argv[1]);
		std::string date = bitcoin.get_database_data().begin()->first;
		std::cout << date << std::endl;

	}
	else
		std::cerr << "Error : Wrong number of arguments" << std::endl;
}