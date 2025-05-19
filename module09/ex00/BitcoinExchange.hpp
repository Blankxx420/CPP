/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:13:10 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/19 10:14:37 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>



class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
		std::string _file;
		BitcoinExchange();
	public:
		BitcoinExchange(std::string file);
		BitcoinExchange(BitcoinExchange const & copied);
		BitcoinExchange& operator=(BitcoinExchange const & copied);
		~BitcoinExchange();

		bool	check_file_data(std::string file);
		float	find_exchange_rate_by_date(std::string file);
		
};


#endif