#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string	_target;
	protected:

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm& copied);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& copied);
		~PresidentialPardonForm();
		
		void execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form);
#endif
