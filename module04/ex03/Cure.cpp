/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:22:44 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 01:13:36 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default constructor of Cure" << std::endl;
}

Cure::Cure(const Cure &cpy): AMateria(cpy)
{
	std::cout << "Copy constructor of Cure" << std::endl;
	*this = cpy;
}

Cure::~Cure()
{
	std::cout << "Cure has been destroyed" << std::endl;
}

Cure& Cure::operator = (const Cure &cure)
{
	std::cout << "Cure assignation has been called" << std::endl;
	if (this != &cure)
	{
		this->_type = cure.getType();
	}
	return *this;
}

Cure *Cure::clone() const
{
	Cure *newcure = new Cure();
	return newcure;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string const & Cure::getType() const
{
	return this->_type;
}