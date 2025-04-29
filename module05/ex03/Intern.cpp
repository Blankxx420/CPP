/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:20:36 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/29 10:52:52 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Intern.hpp"

Intern::Intern(): _form_to_create(NULL), _target(NULL)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(std::string form_to_create, std::string target): _form_to_create(form_to_create), _target(target)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copied)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copied;
}

Intern& Intern::operator=(const Intern& copied)
{
	std::cout << "Intern assignation operator called" << std::endl;
	this->_target = copied.get_Target();
	this->_form_to_create = copied.get_Form_To_Create();
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern deconstructor called" << std::endl;
}

std::string Intern::get_Target() const
{
	return (this->_target);
}

std::string Intern::get_Form_To_Create() const
{
	return (this->_form_to_create);
}

AForm * Intern::makeForm(std::string form_to_create, std::string target)
{
	
}

char const	*Intern::EmptyFormNameException::what(void) const throw()
{
	return ("Name of Form is not given");
}

char const	*Intern::EmptytTargetException::what(void) const throw()
{
	return ("Name of target is not given");
}

char const	*Intern::UnknowFormException::what(std::string form_name) const throw()
{
	std::string msg = form_name + " Unknow form name";
	char const * error = msg.c_str();
	return (error);
}