/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:01:15 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 23:18:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap cp ("Jack");
	ClapTrap cp2 ("West");
	ScavTrap scv ("John");
	ScavTrap scv2 ("EAST");
	DiamondTrap d ("Michel");

	scv = scv2;
	ClapTrap *ptr = new DiamondTrap("dawdawiudawd"); 
	
	cp.attack(scv.getName());
	scv.attack(cp.getName());
	scv.guardGate();
	d.attack(cp.getName());
	d.whoAmI();
	
	delete ptr;
}
