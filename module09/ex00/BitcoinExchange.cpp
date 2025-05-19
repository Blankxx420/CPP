/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 10:14:55 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/19 10:32:15 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _file(NULL), _data(NULL, NULL)
{
    std::cout << "Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(std::string file): _file(file), _data(NULL, NULL)
{
    std::cout << "Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & copied)
{
    *this = copied;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & copied)
{
    if (this != &copied)
    {
        this->_data = copied._data;
        this->_file = copied._file;
    }
    return (*this);
}

