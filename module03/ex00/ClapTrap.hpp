/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:51:16 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/22 14:41:02 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string			_name;
		unsigned int		_hit_point;
		unsigned int		_energy_point;
		unsigned int		_attack_damage;
		unsigned int		_max_health;
		bool				_checkEnergy( void );
		bool				_is_full_health( unsigned int amount_heal );
		bool				_is_dead( unsigned int amount_damage );
	public:
		ClapTrap( const std::string name );
		ClapTrap( const ClapTrap &cpy );
		~ClapTrap();
		ClapTrap& 		operator= ( const ClapTrap &claptrap );

		//setters
		void			setName( std::string value );
		void			setHitPoint( unsigned int value );
		void			setEnergy( unsigned int value );
		void			setAttackDamage( unsigned int value );

		//getter
		std::string		getName( void ) const;
		unsigned int	getHitPoint( void ) const;
		unsigned int	getEnergy( void ) const;
		unsigned int	getAttackDamage( void )const;

		void 			attack( const std::string& target );
		void 			takeDamage( unsigned int amount );
		void 			beRepaired( unsigned int amount );
};

#endif