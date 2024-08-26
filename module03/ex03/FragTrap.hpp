/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:58:11 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 00:00:27 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
	
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		FragTrap & operator=(const FragTrap &FragTrap);
		void	highFivesGuys(void);
	protected:
		const static int	_hitPointsConst = 100;
		const static int	_energyPointsConst = 100;
		const static int	_attackDamageConst = 30;
};
#endif