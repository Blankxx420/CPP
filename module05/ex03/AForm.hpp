/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:43:23 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/29 01:42:15 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool		_is_signed;
		int	const	_grade_to_signed;
		int	const	_grade_to_execute;
		
	public:
		AForm();
		AForm(std::string const &name, int const &grade_to_sign, int const &grade_to_exec);
		AForm(const AForm& copied);
		AForm& operator=(const AForm& copied);
		virtual ~AForm();
		
		//getters
		std::string const &getName(void) const;
		bool const &get_Is_Signed(void) const;
		int const &get_Grade_To_Signed(void) const;
		int const &get_Grade_To_Execute(void) const;

		//member function
		void beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		
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
		class IsNotSignedException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};
std::ostream	&operator<<(std::ostream &str, AForm const &form);
#endif
