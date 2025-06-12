/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:14:55 by brguicho          #+#    #+#             */
/*   Updated: 2025/06/03 09:14:37 by brguicho         ###   ########.fr       */
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
	parse_database_file();
	parse_input_file();
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

void BitcoinExchange::parse_database_file()
{
    std::ifstream stream(_database.c_str());
    std::string buffer;
    std::string key;
    std::string value;
    size_t pos;
    float floatValue;

    if (!stream.good())
        throw (BitcoinExchange::FileErrorException());

    if (std::getline(stream, buffer)) {
    }
    
    while (std::getline(stream, buffer))
    {
        if (buffer.empty())
            continue;
            
        pos = buffer.find(',');
        if (pos != std::string::npos)
        {
            key = buffer.substr(0, pos);
            value = buffer.substr(pos + 1);
            floatValue = std::atof(value.c_str());
            _database_data.insert(std::pair<std::string, float>(key, floatValue));
        }
    }
    stream.close();
}

void BitcoinExchange::parse_input_file()
{
	std::ifstream stream(_file.c_str());
	std::string buffer;
	std::string key;
	std::string value;
	size_t pos;
	float floatValue;

	if (!stream.good())
		throw (BitcoinExchange::FileErrorException());

	if (std::getline(stream, buffer)) {
		
	}
	while (std::getline(stream, buffer))
	{
		if (buffer.empty())
			continue;
			
		pos = buffer.find(" | ");
		if (pos != std::string::npos)
		{
			key = buffer.substr(0, pos);
			value = buffer.substr(pos + 3);
			floatValue = std::atof(value.c_str());
			_input_file_data.insert(std::pair<std::string, float>(key, floatValue));
		}
	}
	stream.close();
}

char const *BitcoinExchange::FileErrorException::what() const throw ()
{
	return ("Error: could not open file.");
}

std::map<std::string, float> BitcoinExchange::get_database_data()
{
	return this->_database_data;
}

std::map<std::string, float> BitcoinExchange::get_input_file_data()
{
	return this->_input_file_data;
}

bool	BitcoinExchange::check_value_format(float value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	else if (value > 1000)
	{
		std::cerr << "Error: too large number." << std::endl;
		return (false);
	}
	return true;
}

bool	BitcoinExchange::check_date_format(std::string date)
{
	int years;
	int months;
	int days;
	
	if (date.size() != 10)
	{
		std::cerr << "Error : bad input => " << date <<std::endl;
		return false;
	}
	for (int i = 0; i < 10; i++)
	{
		if ((i == 4 || i == 7) && date[i] != '-')
		{
			std::cerr << "Error : bad input => " << date <<std::endl;
			return false;
		}
		else if ((i != 4 || i != 7) && !isdigit(date[i]))
		{
			std::cerr << "Error : bad input => " << date <<std::endl;
			return false;
		}
	}
	years = std::atoi(date.substr(0, 4).c_str());
	months = std::atoi(date.substr(5, 7).c_str());
	days = std::atoi(date.substr(8, 10).c_str());
	return true;
}
void	BitcoinExchange::find_exchange_rate_by_date(std::map<std::string, float> database,  std::map<std::string, float> input_data)
{
	std::map<std::string, float>::iterator it_input_data = input_data.begin();
	std::map<std::string, float>::iterator it_database_match;
	for (; it_input_data != input_data.end(); it_input_data++)
	{
		if (!check_date_format(it_input_data->first) || !check_value_format(it_input_data->second))
			it_input_data++;
		else if (database.find(it_input_data->first) == database.end())
			it_database_match = database.lower_bound(it_input_data->first);
		else
		{
			it_database_match = database.find(it_input_data->first);
			std::cout << it_input_data->first << " => " << it_input_data->second
			<< " = " << it_input_data->second * it_database_match->second << std::endl;
		}
	}
}