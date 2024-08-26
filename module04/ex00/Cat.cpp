/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:11:18 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:17:53 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << " Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "Cat copy Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;	
}

Cat&	Cat::operator = (const Cat &Cat)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	this->type = Cat.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "the Cat goes Meow !" << std::endl;
}