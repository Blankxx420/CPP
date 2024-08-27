/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:02:51 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:17:28 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor of Animal" << std::endl;
}

Animal::Animal( std::string type ): type(type)
{
	std::cout << "type given constructor of Animal" << std::endl;
}

Animal::Animal( const Animal &cpy )
{
	std::cout << "Copy constructor of Animal" << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal" << std::endl;
}

Animal&	Animal::operator = ( const Animal &animal )
{
	std::cout << "Assignation operator of Animal" << std::endl;
	this->type = animal.type;
	return (*this);
}

void	Animal::setType(std::string value)
{
	this->type = value;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void )const
{
	std::cout << "The animal make a sound" << std::endl;
}