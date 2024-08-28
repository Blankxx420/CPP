/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:50:46 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 00:52:03 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*_inventory[4];
		std::string const	_name;
	public:
		Character(std::string name);
		Character(Character const & cpy);
		~Character();
		Character & operator=(Character const & character);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};

#endif