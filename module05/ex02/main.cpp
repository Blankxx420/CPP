/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:51:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/29 00:46:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat Harry("Harry", 1);
		RobotomyRequestForm Rform("Harry");
		Harry.signForm(Rform);
		Harry.executeForm(Rform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n------------------------\n\n";
	try
	{
		Bureaucrat Mary("Mary", 45);
		ShrubberyCreationForm Sform ("Mary");
		Mary.signForm(Sform);
		Mary.executeForm(Sform);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n------------------------\n\n";
	try
	{
		Bureaucrat Lucas("Lucas", 145);
		PresidentialPardonForm Pform("Lucas");
		Lucas.signForm(Pform);
		Lucas.executeForm(Pform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}