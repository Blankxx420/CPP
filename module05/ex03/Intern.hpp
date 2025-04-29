/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:51:03 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/29 10:49:42 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class AForm;

enum form_name {
	PresidentialPardonForm,
	RobotomyRequestForm,
	ShrubberyCreationForm
};

class Intern 
{
	
	private:
		std::string _form_to_create;
		std::string _target;

	public:
		Intern();
		Intern(std::string form_to_create, std::string target);
		Intern(const Intern &copied);
		Intern& operator=(const Intern& copied);
		~Intern();
	
		AForm * makeForm(std::string form_to_create, std::string target);
		std::string	get_Form_To_Create(void) const;
		std::string	get_Target(void) const;

		class EmptyFormNameException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class EmptytTargetException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class UnknowFormException: public std::exception
		{
			public:
				virtual char const	*what(std::string form_name) const throw();
		};
};

#endif