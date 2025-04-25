/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:51:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/03 21:24:37 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat Harry("Harry", 1);
	Bureaucrat Lucas("Lucas", 145);
	Bureaucrat Mary("Mary", 45);
	ShrubberyCreationForm Sform("Home");
	RobotomyRequestForm Rform("Harry");
	PresidentialPardonForm Pform("Lucas");
	return (0);
}