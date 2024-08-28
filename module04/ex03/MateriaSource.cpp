/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:24:43 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 01:22:54 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source has been created" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	std::cout << "Materia source has been copied" << std::endl;
	*this = cpy;
}

MateriaSource& MateriaSource::operator= (const MateriaSource &materia_source)
{
	std::cout << "Materia source has been assigned" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (materia_source._inventory[i])
			this->_inventory[i] = (materia_source._inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Materia Source was destroyed" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			std::cout << "Materia "<< materia->getType() << " has been learned" << std::endl;
			this->_inventory[i] = materia;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
		{
			std::cout << "Materia "<< this->_inventory[i]->getType() << " has been created" << std::endl;
			return (this->_inventory[i]->clone());
		}
		
	}
	return (0);
}