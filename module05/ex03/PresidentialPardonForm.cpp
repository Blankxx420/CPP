/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:38:30 by brguicho          #+#    #+#             */
/*   Updated: 2025/04/29 02:06:17 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target(NULL)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copied): AForm::AForm(copied), _target(copied._target)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = copied;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copied)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	AForm::operator=(copied);
	this->_target = copied._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->get_Is_Signed() == false)
		throw PresidentialPardonForm::IsNotSignedException();
	else if (executor.getGrade() > this->get_Grade_To_Execute())
		throw  (Bureaucrat::GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.get_Is_Signed() << ", sign grade: " << form.get_Grade_To_Signed() << ", exec grade: " << form.get_Grade_To_Execute());
}