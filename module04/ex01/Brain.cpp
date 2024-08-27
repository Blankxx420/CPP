/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:34:13 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/27 13:49:03 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor"<< std::endl;
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Brainy brain";
}

Brain::Brain(Brain &cpy)
{
	std::cout << "Brain copy constructor"<< std::endl;
	std::string *cpy_ideas = cpy.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy_ideas[i];
}

Brain::~Brain()
{
	delete [] (this->_ideas);
	std::cout << "Brain deconstructor" << std::endl;
}

Brain& Brain::operator = (const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}