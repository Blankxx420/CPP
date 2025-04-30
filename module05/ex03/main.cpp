/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:51:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/30 23:42:33 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{

	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTING:" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Intern	intern;
	AForm	*robo_form;
	AForm	*shrub_form;
	AForm	*president_form;
	AForm	*unknown_form;
	std::cout << std::endl << std::endl;
	//-----------------------------------------------------


	std::cout << std::endl;
	std::cout << "INTERN TESTS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	// Robo:
	robo_form = intern.makeForm("robotomy request", "robo");
	std::cout << *robo_form << " was just created " << std::endl << std::endl;

	// President:
	president_form = intern.makeForm("presidential pardon", "president");
	std::cout << *president_form << " was just created " << std::endl << std::endl;

	// Shrub:
	shrub_form = intern.makeForm("shrubbery creation", "shrub");
	std::cout << *shrub_form << " was just created " << std::endl << std::endl;

	// Unknown:
	try
	{
		unknown_form = intern.makeForm("driving licence", "drive");
		std::cout << *unknown_form << " was just created " << std::endl << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	std::cout << "DESTRUCTORS:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete robo_form;
	delete shrub_form;
	delete president_form;
	delete unknown_form;
	return (0);
	//-------------------------------------------------------	
}