/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robegarc <robegarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:53:51 by parrot            #+#    #+#             */
/*   Updated: 2023/05/20 15:23:20 by robegarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	struct tm	*timeinfo;
	time_t		rawtime;
	char		buffer[20];

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );

	strftime ( buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo );
	std::cout << buffer;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits \
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit \
		<< ";amount" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount \
			<< ";withdrawal:refused;" << std::endl;
		return (0);
	}

	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal \
		<< ";withdrawal:" << withdrawal << ";amount" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits << ";withdrawal:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
