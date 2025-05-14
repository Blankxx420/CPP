#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(NULL)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copied): AForm::AForm(copied), _target(copied._target)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = copied;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copied)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	AForm::operator=(copied);
	if (this != &copied)
	{
		this->_target = copied._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outfile;
	
	if (this->get_Is_Signed() == false)
		throw (ShrubberyCreationForm::IsNotSignedException());
	else if (executor.getGrade() > this->get_Grade_To_Execute())
		throw  (Bureaucrat::GradeTooLowException());
	outfile.open((this->_target + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cerr << "Could not open output file" << std::endl;
		return ;
	}
	outfile << TREE;
	outfile.close();
	std::cout << executor.getName() << " successfully created a shrubbery" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.get_Is_Signed() << ", sign grade: " << form.get_Grade_To_Signed() << ", exec grade: " << form.get_Grade_To_Execute());
}