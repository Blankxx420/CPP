/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:25:58 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 14:37:18 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::setName("default_clap_name");
	std::cout << "DiamondTrap " << this->getName() << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name")
{
	this->setName(name);
	this->setHitPoint(FragTrap::getHitPoint());
	this->setEnergy(ScavTrap::getEnergy());
	this->setAttackDamage(FragTrap::getAttackDamage());
	std::cout << "DiamondTrap " << this->getName() << " created." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->getName() << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap " << this->getName() << " copied." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "Assignment operator for DiamondTrap called." << std::endl;
	FragTrap::operator=(copy);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->getHitPoint() <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->getName() << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->getName() << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::getName() << "." << std::endl;
	}
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}


