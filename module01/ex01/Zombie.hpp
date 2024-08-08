/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:27:09 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/07 23:06:59 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	announce( void ) const;
	void	set_name(std::string new_name);
};

Zombie* zombieHorde( int N, std::string name );

#endif 