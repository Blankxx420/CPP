/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:35:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/03 21:52:10 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		std::string		_name;
		int				_grade;
	protected:

	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat& copied);
		Bureaucrat& operator=(const Bureaucrat& copied);
		~Bureaucrat();
		
		int getGrade(void) const;
		std::string const &getName(void) const;
		void increment_grade(void);
		void decrement_grade(void);
		void signForm(AForm &form);
		void executeForm(AForm const & form);
		
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
};
std::ostream	&operator<<(std::ostream &str, Bureaucrat const &bureaucrat);
#endif
