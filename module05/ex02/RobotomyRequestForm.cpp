#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("PresideantialPardonForm", 72, 45), _target(NULL)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm::AForm("PresideantialPardonForm", 72, 45), _target(target)
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
	this->_target = copied._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int	success;

	srand((unsigned) time(NULL));
	success = rand() % 2;
	(void)bureaucrat;
	if (success)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.get_Is_Signed() << ", sign grade: " << form.get_Grade_To_Signed() << ", exec grade: " << form.get_Grade_To_Execute());
}