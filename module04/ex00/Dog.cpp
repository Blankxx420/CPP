/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:53:32 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:17:43 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << " Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog copy Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;	
}

Dog&	Dog::operator = (const Dog &dog)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "the Dog goes Wouaf !" << std::endl;
}