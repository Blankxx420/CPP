/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:24:09 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 23:31:56 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	private:
	
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		~DiamondTrap();
		DiamondTrap & operator=(const DiamondTrap &DiamondTrap);
		void	attack(const std::string& target);
		void	whoAmI(void);
};
#endif