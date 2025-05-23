/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:13:10 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/22 22:23:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <exception>
#include <bits/stdc++.h>



class BitcoinExchange
{
	private:
		std::map<std::string, float> _input_file_data;
		std::map<std::string, float> _database_data;
		std::string _file;
		std::string _database;
		BitcoinExchange();
	public:
		BitcoinExchange(std::string file);
		BitcoinExchange(BitcoinExchange const & copied);
		BitcoinExchange& operator=(BitcoinExchange const & copied);
		~BitcoinExchange();

		void	parse_file(std::string file, std::map<std::string, float> map);
		bool	check_input_file_data(std::string file);
		float	find_exchange_rate_by_date(std::string file);
		std::map<std::string, float> get_map(void);
		
		class FileErrorException: public std::exception
		{
			public:
				virtual const char* what(void) const throw ();
		};
};


#endif