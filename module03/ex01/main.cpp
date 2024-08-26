/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:01:15 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/22 22:00:10 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap cp ("Jack");
	ClapTrap cp2 ("West");
	ScavTrap scv ("John");
	ScavTrap scv2 ("EAST");

	scv = scv2;
	cp.attack(scv.getName());
	scv.attack(cp.getName());
	scv.guardGate();
}