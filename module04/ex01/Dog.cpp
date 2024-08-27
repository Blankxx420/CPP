/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:53:32 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 20:05:54 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << " Dog Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &cpy)
{
	this->_brain = new Brain(*(cpy.getBrain()));
	std::cout << "Dog copy Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;	
}

Dog&	Dog::operator = (const Dog &dog)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->type = dog.type;
	this->_brain = new Brain();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "the Dog goes Wouaf !" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
	return (this->_brain);
}