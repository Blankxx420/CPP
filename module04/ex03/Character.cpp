/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:52:55 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/28 01:43:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "Character has been created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(Character const & cpy) : _name(cpy.getName() + "_copy")
{
	std::cout << "Copy Character constructor" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if ((cpy._inventory)[i])
			(this->_inventory)[i] = (cpy._inventory[i])->clone();
	}
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character " << this->_name << " was destroyed\n";
}

Character & Character::operator=(Character const & character)
{
	// Impossible to change name because it's constant
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (character._inventory[i])
			this->_inventory[i] = (character._inventory[i])->clone();
	}
	return (*this);
}