/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:51:03 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/30 23:32:42 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

class AForm;

class Intern 
{

	public:
		Intern();
		Intern(const Intern &copied);
		Intern& operator=(const Intern& copied);
		~Intern();
	
		AForm * makeForm(std::string form_to_create, std::string target);
		class UnknowFormException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};

#endif