/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:39:32 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 23:59:02 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
	
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap &scavtrap);
		void	attack(const std::string& target);
		void 	guardGate();
		unsigned int	getenergy( void );
		
	protected:
		const static int	_hitPointsConst = 100;
		const static int	_energyPointsConst = 50;
		const static int	_attackDamageConst = 20;
};
#endif