/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:14:55 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/22 22:23:29 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _file(NULL), _database("data.csv")
{
	std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file): _file(file), _database("data.csv")
{
	std::cout << "Constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Deconstructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & copied)
{
	*this = copied;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & copied)
{
	if (this != &copied)
	{
		this->_input_file_data = copied._input_file_data;
		this->_database_data = copied._database_data;
		this->_file = copied._file;
		this->_database = copied._database;
	}
	return (*this);
}

void BitcoinExchange::parse_file(std::string file, std::map<std::string, float> map)
{
	std::ifstream stream(file.c_str());
	std::string buffer;
	std::string key;
	std::string value;
	size_t pos;
	float floatValue;

	if (!stream.good())
		throw (BitcoinExchange::FileErrorException());
	std::getline(stream, buffer);
	while (std::getline(stream, buffer))
	{
		pos = buffer.find(',');
		if (pos != std::string::npos)
		{
			key = buffer.substr(0, pos);
			value = buffer.substr(pos + 1);
			floatValue = std::atof(value.c_str());
			map.insert(std::pair<std::string, float>(key, floatValue));
		}
	}
}

char const *BitcoinExchange::FileErrorException::what() const throw ()
{
	return ("Error: could not open file.");
}

std::map<std::string, float> BitcoinExchange::get_map()
{
	return this->_database_data;
}