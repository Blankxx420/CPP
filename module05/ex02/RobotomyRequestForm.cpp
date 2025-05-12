#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target(NULL)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm::AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copied): AForm::AForm(copied), _target(copied._target)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = copied;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copied)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	AForm::operator=(copied);
	if (this != &copied)
	{
		this->_target = copied._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{ 	
	int	success;
	if (this->get_Is_Signed() == false)
		throw (RobotomyRequestForm::IsNotSignedException());
	else if (executor.getGrade() > this->get_Grade_To_Execute())
		throw  (Bureaucrat::GradeTooLowException());
	success = rand() % 2;
	if (success)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.get_Is_Signed() << ", sign grade: " << form.get_Grade_To_Signed() << ", exec grade: " << form.get_Grade_To_Execute());
}