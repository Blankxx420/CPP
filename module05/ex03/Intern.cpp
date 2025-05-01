/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:20:36 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/01 00:00:00 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &copied)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copied;
}

Intern& Intern::operator=(const Intern & copied)
{
	(void)copied;
	std::cout << "Intern assignation operator called" << std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern deconstructor called" << std::endl;
}

AForm * Intern::makeForm(std::string form_to_create, std::string target)
{
	int i = 0;
	AForm *form = NULL;
	std::string form_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 4 && form_name[i].compare(form_to_create) != 0)
		i++;
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw (Intern::UnknowFormException());
	}
	if (form)
		std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

char const	*Intern::UnknowFormException::what() const throw()
{
	return ("Unknow form name");
}