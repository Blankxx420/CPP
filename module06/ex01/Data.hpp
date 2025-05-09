/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:27:54 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/08 18:27:57 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>

struct Data
{
	int	id;
	std::string name;
	float value;
	Data(int _id = 0, const std::string & _name = "", float _value = 0.0): id(_id), name(_name), value(_value) {}
};


#endif 