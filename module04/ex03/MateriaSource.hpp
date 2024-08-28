/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:18:29 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 01:11:29 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		~MateriaSource();
		MateriaSource & operator = (const MateriaSource &materia_source);
		void learnMateria(AMateria *materia);
		AMateria* 	createMateria(std::string const & type);
};

#endif