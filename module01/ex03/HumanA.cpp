/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 23:28:28 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/08 23:54:49 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << this->_name + " has been created whith a " + this->_weapon.getType() + " in hand" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name + " has been killed" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name + " attacks with their " + this->_weapon.getType() << std::endl;
}
