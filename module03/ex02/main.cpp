/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:01:15 by brguicho          #+#    #+#             */
/*   Updated: 2024/12/19 14:34:55 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap cp ("Jack");
	ClapTrap cp2 ("West");
	ScavTrap scv ("John");
	ScavTrap scv2 ("EAST");
	FragTrap fg1 ("SOUTH");
	

	scv = scv2;
	cp.attack(scv.getName());
	scv.attack(cp.getName());
	scv.guardGate();
	fg1.highFivesGuys();
	fg1.attack(cp.getName());
}