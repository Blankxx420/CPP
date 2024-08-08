/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:34:11 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/07 23:09:37 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <string>

std::string to_string(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name + " " + to_string(i + 1));
		horde[i].announce();
	}
	return (&horde[0]);
}