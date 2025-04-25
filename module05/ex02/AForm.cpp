#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("Default"), _is_signed(false), _grade_to_signed(150), _grade_to_execute(1)
{
	std::cout << "AForm Default constructor called" << std::endl;
}
AForm::AForm(std::string const &name, int const &grade_to_sign, int const &grade_to_exec): _name(name), _is_signed(false),
																							_grade_to_signed(grade_to_sign), _grade_to_execute(grade_to_exec)
{
	std::cout << "AForm constructor called" << std::endl;
	if (this->_grade_to_signed < 1)
		throw(AForm::GradeTooHighException());
	else if (this->_grade_to_signed > 150)
		throw (AForm::GradeTooLowException());
	if (this->_grade_to_execute < 1)
		throw (AForm::GradeTooHighException());
	else if (this->_grade_to_execute > 150)
		throw (AForm::GradeTooLowException());

}
AForm::AForm(const AForm& copied):_name(copied._name), _is_signed(copied._is_signed),
								_grade_to_signed(copied._grade_to_signed), _grade_to_execute(copied._grade_to_execute)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = copied;
}

AForm& AForm::operator=(const AForm& copied)
{
	std::cout << "AForm Assignation operator called" << std::endl;
	this->_is_signed = copied._is_signed;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

std::string const &AForm::getName(void) const
{
	return (this->_name);
}

int const &AForm::get_Grade_To_Execute(void) const
{
	return (this->_grade_to_execute);
}

int const	&AForm::get_Grade_To_Signed(void) const
{
	return (this->_grade_to_signed);
}

bool const &AForm::get_Is_Signed(void) const
{
	return (this->_is_signed);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_is_signed == true)
		throw  (AForm::AlreadySignedException());
	if (bureaucrat.getGrade() > this->_grade_to_signed)
		throw (AForm::GradeTooLowException());
	else
	{
		this->_is_signed = true;
		std::cout << bureaucrat.getName() << " successfully sign AForm " << this->getName() << std::endl;
	}
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}
char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

char const *AForm::AlreadySignedException::what(void) const throw()
{
	return ("AForm is Already signed");
}
char const *AForm::IsNotSignedException::what(void) const throw()
{
	return ("AForm is not signed");
}

std::ostream	&operator<<(std::ostream &str, AForm const &form)
{
	str << form.getName() << ", Form grade to signed " << form.get_Grade_To_Signed()
		<< ", Form grade to exectute " << form.get_Grade_To_Execute()
		<< ", Form is signed " << form.get_Is_Signed();
	return (str);
}
