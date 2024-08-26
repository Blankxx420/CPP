/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:53:32 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/26 22:57:15 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << " Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog copy  Constructor" << std::endl;
}