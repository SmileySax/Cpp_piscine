#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:"	<< Account::_nbAccounts			<< ";";
	std::cout << "total:"		<< Account::_totalAmount			<< ";";
	std::cout << "deposits:"	<< Account::_totalNbDeposits		<< ";";
	std::cout << "withdrawals:"	<< Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

Account::Account( int initial_deposit ): _nbDeposits (0), _nbWithdrawals (0) {
	this->_amount = initial_deposit;
	this->_displayTimestamp();
	this->_accountIndex = Account::_nbAccounts;
	this->Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	std::cout << "index:"	<< this->_accountIndex	<< ";";
	std::cout << "amount:"	<< this->_amount		<< ";";
	std::cout << "created"	<< std::endl;
}

Account::~Account( void ) {
	this->_displayTimestamp();
	this->_nbAccounts--;
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;
	std::cout << "index:"	<< this->_accountIndex	<< ";";
	std::cout << "amount:"	<< this->_amount		<< ";";
	std::cout << "closed"	<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_displayTimestamp();
	std::cout << "index:"		<< this->_accountIndex	<< ";";
	std::cout << "p_amount:"	<< this->_amount		<< ";";
	std::cout << "deposit:"		<< deposit				<< ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "amount:"		<< this->_amount		<< ";";
	std::cout << "nb_deposits:"	<< this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	this->_displayTimestamp();
	std::cout << "index:"		<< this->_accountIndex	<< ";";
	std::cout << "p_amount:"	<< this->_amount		<< ";";
	if (this->_amount < withdrawal) {
		std::cout << "withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << "withdrawal:"	<< withdrawal			<< ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "amount:"		<< this->_amount		<< ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (1);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus( void ) const {
	this->_displayTimestamp();
	std::cout << "index:"		<< this->_accountIndex	<< ";";
	std::cout << "amount:"		<< this->_amount		<< ";";
	std::cout << "deposits:"	<< this->_nbDeposits	<< ";";
	std::cout << "withdrawals:"	<< this->_nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [80];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"[%Y%m%d_%H%M%S] ",timeinfo);
//	puts (buffer);
	std::cout << buffer;

	return ;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
