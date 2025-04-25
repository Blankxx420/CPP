/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:23 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/01 13:32:57 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const _name;
		bool		_is_signed;
		int	const	_grade_to_signed;
		int	const	_grade_to_execute;
		
	public:
		Form();
		Form(std::string const &name, int const &grade_to_sign, int const &grade_to_exec);
		Form(const Form& copied);
		Form& operator=(const Form& copied);
		~Form();
		
		//getters
		std::string const &getName(void) const;
		bool const &get_Is_Signed(void) const;
		int const &get_Grade_To_Signed(void) const;
		int const &get_Grade_To_Execute(void) const;

		//member function
		void beSigned(Bureaucrat &bureaucrat);
		
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class AlreadySignedException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};
std::ostream	&operator<<(std::ostream &str, Form const &form);
#endif
