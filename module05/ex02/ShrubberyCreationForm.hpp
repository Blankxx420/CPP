/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:45:44 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/03 21:07:13 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

#define TREE "    *\n   /.\\\n  /o..\\\n /..o\\\n /.o..o\\\n /...o.\\\n/..o....\\\n^^^[_]^^^\n"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;
	protected:

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copied);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copied);
		~ShrubberyCreationForm();
		
		void execute(Bureaucrat const &bureaucrat) const;
};
std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form);
#endif
