/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:01:15 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/22 15:31:03 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap cp ("Jack");
	ClapTrap cp2 ("John");
	ClapTrap cp3 ("Eric");
	ClapTrap cp4 (cp);

	cp3 = cp;
	cp.attack(cp2.getName());
	cp.takeDamage(2);
	cp.beRepaired(3);
	cp.setAttackDamage(5);
	cp.attack(cp2.getName());
	cp3.attack(cp.getName());
	cp4.attack(cp2.getName());
	cp.takeDamage(11);
}