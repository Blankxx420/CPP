/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:27:09 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/12 22:13:33 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP
#define __ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	void announce( void );
	Zombie(std::string name);
	Zombie();
	~Zombie();
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif 