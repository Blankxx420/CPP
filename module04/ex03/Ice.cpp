/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:06:51 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/29 01:13:51 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Default constructor of ice" << std::endl;
}

Ice::Ice(const Ice &cpy): AMateria(cpy)
{
	std::cout << "Copy constructor of ice" << std::endl;
	*this = cpy;
}

Ice::~Ice()
{
	std::cout << "Ice has been destroyed" << std::endl;
}

Ice& Ice::operator = (const Ice &ice)
{
	std::cout << "Ice assignation has been called" << std::endl;
		if (this != &ice)
	{
		this->_type = ice.getType();
	}
	return *this;
}

Ice *Ice::clone() const
{
	Ice *newice = new Ice();
	return newice;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string const & Ice::getType() const
{
	return this->_type;
}