/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 23:39:18 by brguicho          #+#    #+#             */
/*   Updated: 2024/11/18 09:19:28 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << this->_name + " has been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name + " has been killed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;	
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << this->_name + " attacks with their " + this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name + " must grab a weapon first"<< std::endl;
}