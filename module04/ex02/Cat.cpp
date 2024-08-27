/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:11:18 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 22:03:08 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << " Cat Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	this->_brain = new Brain(*(cpy.getBrain()));
	std::cout << "Cat copy Constructor" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;	
}

Cat&	Cat::operator = (const Cat &Cat)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->type = Cat.type;
	this->_brain = new Brain();
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "the Cat goes Wouaf !" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->_brain);
}