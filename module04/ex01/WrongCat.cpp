/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:43:37 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 01:46:33 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << " WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
	std::cout << "WrongCat copy Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;	
}

WrongCat&	WrongCat::operator = (const WrongCat &WrongCat)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	this->type = WrongCat.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "the WrongCat goes Meow !" << std::endl;
}