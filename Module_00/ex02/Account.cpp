/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 02:13:55 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/12 16:07:02 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp( void ) {
	time_t	rawtime;
	struct	tm * timeinfo;
	char	buff[20];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buff, 20, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buff << "] ";
}


Account::Account( void ) { }

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	_accountIndex = _nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
}


int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}
int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	if (deposit >= 0)
	{
		_nbDeposits += 1;
		_totalNbDeposits += 1;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit 
		<< ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
		_amount += deposit;
		_totalAmount += deposit;
	}
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (this->_amount >= withdrawal)
	{
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:"
		<< _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}
int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}