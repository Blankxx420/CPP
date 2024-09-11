/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brguicho <brguicho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:55:51 by brguicho          #+#    #+#             */
/*   Updated: 2024/09/11 14:15:15 by brguicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_totalAmount = 0;

int Account::_nbAccounts = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount() 
			<< ";created" << std::endl;
	Account::_nbAccounts++;
	
}

Account::Account( void )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount() 
			<< ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->checkAmount() 
			<< ";closed" << std::endl;
	Account::_nbAccounts--;
}

int	Account::getNbAccounts( void )
{	
	return(Account::_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	char buffer[100];

	now = time(NULL);
	std::tm* tm_ptr = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tm_ptr);
	std::cout << buffer << " ";
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		      << ";total:"<< Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  << std::endl;
	
}

void	Account::makeDeposit( int deposit)
{
	int	p_amount;
	
	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex 
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit
			  << ";amount:" << this->checkAmount()
			  << ";nb_deposits:" << this->_nbDeposits
			  << std::endl;
}
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool	status;
	int		p_amount;
	
	status = true;
	p_amount = this->_amount;
	Account::_displayTimestamp();
	if (p_amount < withdrawal)
	{
		status = false;
		std::cout << "index:" << this->_accountIndex
				  << ";p_amount:" << p_amount
				  << ";withdrawal:refused"
				  << std::endl;
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "index:" << this->_accountIndex 
			  << ";p_amount:" << p_amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << this->checkAmount()
			  << ";nb_withdrawals:" << this->_nbWithdrawals
			  << std::endl;
	}
	return (status);
}