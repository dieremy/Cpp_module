/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:53:51 by parrot            #+#    #+#             */
/*   Updated: 2023/05/19 22:30:19 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Accounts.hpp"

int	Account::_nbAccounts = 0
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << this->_nbAccounts << ";total:" << this->_totalAmount << ";deposits:" << this->_totalNbDeposits << ";withdrawals:" << this->_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{}

void	Account::displayStatus( void ) const
{}

int		Account::checkAmount( void ) const
{
	return (this->amount);
}

int	Account::getNbAccounts( void )
{
	return (this->_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (this->_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (this->_nbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (this->_nbWithdrawals);	
}
