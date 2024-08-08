/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:36:17 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/08 23:55:56 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon: " + this->_type + " has been created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << this->_type << " has been destroyed" << std::endl;
}

const std::string& Weapon::getType( void ) const
{
	const std::string &typeref = this->_type;
	return (typeref);
}

void	Weapon::setType(std::string newtype)
{
	this->_type = newtype;
}