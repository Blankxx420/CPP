/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:01:06 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 14:22:29 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
	this->setMaxHealth(100);
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	std::cout << "FragTrap name given constructor" << std::endl;
	this->setHitPoint(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
	this->setMaxHealth(100);
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy)
{
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &FragTrap)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->setName(FragTrap.getName());
	this->setHitPoint(FragTrap.getHitPoint());
	this->setEnergy(FragTrap.getEnergy());
	this->setAttackDamage(FragTrap.getAttackDamage());
	this->setMaxHealth(FragTrap.getHitPoint());
	return (*this);
}

void 	FragTrap::highFivesGuys()
{
	if (this->getHitPoint() <= 0)
		std::cout << "Cannot high five because: FragTrap " << this->getName() << " is dead." << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}
