/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:40:01 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:45:25 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): type(type)
{
	std::cout << "type given constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &cpy )
{
	std::cout << "Copy constructor of WrongAnimal" << std::endl;
	*this = cpy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal &WrongAnimal )
{
	std::cout << "Assignation operator of WrongAnimal" << std::endl;
	this->type = WrongAnimal.type;
	return (*this);
}

void	WrongAnimal::setType(std::string value)
{
	this->type = value;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void )const
{
	std::cout << "The WrongAnimal make a sound" << std::endl;
}