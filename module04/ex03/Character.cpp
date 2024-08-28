/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:52:55 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 01:03:44 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "Character has been created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(Character const & cpy)
{
	std::cout << "Copy Character constructor" << std::endl;
	*this = cpy;
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
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (character._inventory[i])
			this->_inventory[i] = (character._inventory[i])->clone();
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			std::cout << this->getName() << " equip a materia " << m->getType() << std::endl;
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		std::cout << this->getName() << " unequip a materia " << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{

		std::cout << this->getName() << " use " << this->getMateriaFromInventory(idx)->getType() << std::endl;
		this->getMateriaFromInventory(idx)->use(target);

}

AMateria *	Character::getMateriaFromInventory(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inventory[idx])
			return this->_inventory[idx];
	}
	return (NULL);
}

std::string const & Character::getName() const
{
	return (this->_name);
}