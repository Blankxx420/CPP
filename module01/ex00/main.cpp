/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:02:39 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/07 22:22:57 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack_zombie("Stack Zombie");
	stack_zombie.announce();
	
	Zombie	*heap_zombie = newZombie("Heap Zombie");

	randomChump("Random Chump Zombie");
	delete heap_zombie;
	return (0);
}