/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 08:51:41 by brguicho          #+#    #+#             */
/*   Updated: 2025/02/01 13:37:59 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat b("Bruno",151);
			std::cout << b << std::endl;
		}
		catch(const std::exception& e)
		{
		std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\n------------------------\n\n";
	{
		try
		{
			Bureaucrat p("Patrick", 0);
			std::cout << p << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	std::cout << "\n------------------------\n\n";
		{
		try
		{
			Bureaucrat c("Charles", 1);
			std::cout << c << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	std::cout << "\n --------------------- \n\n";
	{	
		try 
		{
			Bureaucrat dur("Dur", 3);
			std::cout << dur << std::endl;
			dur.increment_grade();
			std::cout << dur << std::endl;
			dur.increment_grade();
			std::cout << dur << std::endl;
			dur.increment_grade();
			std::cout << dur << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	{	
		try 
		{
			Bureaucrat alan("Alan", 149);
			std::cout << alan << std::endl;
			alan.decrement_grade();
			std::cout << alan << std::endl;
			alan.decrement_grade();
			std::cout << alan << std::endl;
			alan.decrement_grade();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n------------------------\n\n";
	{
		try
		{
			Bureaucrat p("Patrick", 1);
			std::cout << p << std::endl;
			Form f("form", 60, 20);
			std::cout << f << std::endl;
			p.signForm(f);
			p.signForm(f);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	std::cout << "\n------------------------\n\n";
	{
		try
		{
			Bureaucrat m("Michel", 150);
			std::cout << m << std::endl;
			Form f("form", 60, 20);
			std::cout << f << std::endl;
			m.signForm(f);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	return (0);
}