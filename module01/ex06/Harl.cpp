/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:08:32 by brguicho          #+#    #+#             */
/*   Updated: 2024/08/14 00:34:31 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::complain( std::string level )
{
	void (Harl::*functionsptr[4])( void ) = {&Harl::debug, &Harl::error, &Harl::warning, &Harl::info};
	std::string levels[4] = {"DEBUG", "ERROR", "WARNING", "INFO"};
	int i = 0;

	for (; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}
	switch(i)
	{
		case(0):
			(this->*functionsptr[0])();
			(this->*functionsptr[1])();
			(this->*functionsptr[2])();
			(this->*functionsptr[3])();
			break;
		case(1):
			(this->*functionsptr[1])();
			(this->*functionsptr[2])();
			(this->*functionsptr[3])();
			break;
		case(2):
			(this->*functionsptr[2])();
			(this->*functionsptr[3])();
			break;
		case(3):
			(this->*functionsptr[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}