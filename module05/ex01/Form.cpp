#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("Default"), _is_signed(false), _grade_to_signed(150), _grade_to_execute(1)
{
	std::cout << "Form Default constructor called" << std::endl;
}
Form::Form(std::string const &name, int const &grade_to_sign, int const &grade_to_exec): _name(name), _is_signed(false),
																							_grade_to_signed(grade_to_sign), _grade_to_execute(grade_to_exec)
{
	std::cout << "Form constructor called" << std::endl;
	if (this->_grade_to_signed < 1)
		throw (Form::GradeTooHighException());
	else if (this->_grade_to_signed > 150)
		throw (Form::GradeTooLowException());
	if (this->_grade_to_execute < 1)
		throw (Form::GradeTooHighException());
	else if (this->_grade_to_execute > 150)
		throw (Form::GradeTooLowException());

}
Form::Form(const Form& copied):_name(copied._name), _is_signed(copied._is_signed),
								_grade_to_signed(copied._grade_to_signed), _grade_to_execute(copied._grade_to_execute)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = copied;
}

Form& Form::operator=(const Form& copied)
{
	std::cout << "Form Assignation operator called" << std::endl;
	this->_is_signed = copied._is_signed;
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

std::string const &Form::getName(void) const
{
	return (this->_name);
}

int const &Form::get_Grade_To_Execute(void) const
{
	return (this->_grade_to_execute);
}

int const	&Form::get_Grade_To_Signed(void) const
{
	return (this->_grade_to_signed);
}

bool const &Form::get_Is_Signed(void) const
{
	return (this->_is_signed);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_is_signed == true)
		throw  (Form::AlreadySignedException());
	if (bureaucrat.getGrade() > this->_grade_to_signed)
		throw (Form::GradeTooLowException());
	else
	{
		this->_is_signed = true;
		std::cout << bureaucrat.getName() << " successfully sign form " << this->getName() << std::endl;
	}
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}
char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

char const *Form::AlreadySignedException::what(void) const throw()
{
	return ("Form is Already signed");
}

std::ostream	&operator<<(std::ostream &str, Form const &form)
{
	str << form.getName() << ", form grade to signed " << form.get_Grade_To_Signed()
		<< ", Form grade to exectute " << form.get_Grade_To_Execute()
		<< ", Form is signed " << form.get_Is_Signed();
	return (str);
}
