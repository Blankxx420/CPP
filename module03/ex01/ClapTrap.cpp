/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 23:13:18 by brguicho          #+#    #+#             */
/*   Updated: 2024/12/19 14:19:54 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("default"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Claptrap name given constructor called" << std::endl;
	this->_max_health = _hit_point;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator = (const ClapTrap &claptrap)
{
	std::cout << " ClapTrap Assignation operator called" << std::endl;
	this->_name = claptrap.getName();
	this->_hit_point = claptrap.getHitPoint();
	this->_energy_point = claptrap.getEnergy();
	this->_attack_damage = claptrap.getAttackDamage();
	this->_max_health = claptrap.getHitPoint();
	return (*this);
}

// Setters functions

void	ClapTrap::setName(std::string value)
{
	this->_name = value;
}

void	ClapTrap::setHitPoint(unsigned int value)
{
	this->_hit_point = value;
}

void	ClapTrap::setEnergy(unsigned int value)
{
	this->_energy_point = value;
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	this->_attack_damage = value;
}

void	ClapTrap::setMaxHealth(unsigned int value)
{
	this->_max_health = value;
}

//getters function

std::string	ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getHitPoint() const
{
	return this->_hit_point;
}

unsigned int	ClapTrap::getEnergy() const
{
	return this->_energy_point;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return this->_attack_damage;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->checkEnergy() == false)
	{	std::cout << "ClapTrap " << this->getName() << " has not enough energy to attack" << std::endl;
		return;
	}
	else
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "Claptrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " recieved " << amount << " points of damage,";
	if (this->_is_dead(amount) == true)
		this->setHitPoint(0);
	else
		this->setHitPoint(this->getHitPoint() - amount);
	std::cout << " Hit points goes dowm to " << this->getHitPoint() << std::endl;
	if (this->getHitPoint() == 0)
	{
		std::cout << "Claptrap " << this->getName() << " died in excruciating pain" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->checkEnergy() == false)
	{
		std::cout << "ClapTrap " << this->getName() << " has not enough energy to be repaired" << std::endl;
		return;
	}
	else
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << "ClapTrap " << this->getName() << " be repaired " << amount << " hit points,";
		if (this->_is_full_health(amount) == true)
			this->setHitPoint(this->_max_health);
		else
			this->setHitPoint(this->getHitPoint() + amount);
		std::cout << " Hit points goes up to " << this->getHitPoint() << std::endl;
	}
}

bool	ClapTrap::checkEnergy()
{
	bool enough_energy = false;
	
	if (this->getEnergy() > 0)
	{
		enough_energy = true;
		return (enough_energy);
	}
	return (enough_energy);
}

bool	ClapTrap::_is_dead(unsigned int amount_damage)
{
	bool dead = false;
	if (amount_damage > this->_hit_point)
		dead = true;
	return (dead);
}

bool	ClapTrap::_is_full_health(unsigned int amount_heal)
{
	bool full_health = false;
	if (amount_heal + this->_hit_point > this->_max_health)
		full_health = true;
	return (full_health);
}