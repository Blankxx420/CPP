/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:29:03 by brguicho          #+#    #+#             */
/*   Updated: 2025/05/09 11:10:42 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base*	generate(void)
{
	int random_number;

	random_number = std::rand() % 3;
	switch (random_number)
	{
	case 0:
		return	(new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		std::cerr << "generate fail" << std::endl;
		return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != nullptr)
		std::cout << "type of object is A" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "type of object is B" << std::endl;
	else if (dynamic_cast<B *>(p) != nullptr)
		std::cout << "type of object is B" << std::endl;
	else
		std::cerr << "type objec is unknown";
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "type of object is A" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "type of object is B" << std::endl;
		}
		catch(std::bad_cast &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "type of object is C" << std::endl;
			}
			catch(std::bad_cast &e)
			{
				std::cerr << "Can't cast unknown type" << e.what() << std::endl;
			}
		}
	}
}