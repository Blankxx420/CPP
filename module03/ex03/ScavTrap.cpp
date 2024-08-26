/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:17:26 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 23:30:37 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	this->setMaxHealth(100);
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap name given constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	this->setMaxHealth(100);
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy)
{
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->setName(scavtrap.getName());
	this->setHitPoint(scavtrap.getHitPoint());
	this->setEnergy(scavtrap.getEnergy());
	this->setAttackDamage(scavtrap.getAttackDamage());
	this->setMaxHealth(scavtrap.getHitPoint());
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
		if (this->checkEnergy() == false)
	{	std::cout << "ScavTrap " << this->getName() << " has not enough energy to attack" << std::endl;
		return;
	}
	else
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "Scavtrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
	}
}

void 	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}

unsigned int	ScavTrap::getenergy()
{
	return this->getEnergy();
}