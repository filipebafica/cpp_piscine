/* Copyright (c) 2022 Filipe Báfica, Licensed under the MIT License. */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
    static int index;

    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    this->_accountIndex = index;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    ++index;

    Account::_displayTimestamp();
    std::cout << ' '
        << "index:" << this->_accountIndex << ';'
        << "amount:" << this->_amount << ';'
        << "created" << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << ' '
        << "index:" << this->_accountIndex << ';'
        << "amount:" << this->_amount << ';'
        << "closed" << std::endl;
}

void Account::_displayTimestamp(void) {
    std::time_t t;
    std::tm     *now;

    t = std::time(0);
    now = std::localtime(&t);
    std::cout << '['
        << (now->tm_year + 1900)
        << (now->tm_mon + 1)
        << (now->tm_mday)
        << '_'
        << (now->tm_hour)
        << (now->tm_min)
        << (now->tm_sec)
        << ']';
}

int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << ' '
        << "accounts:" << Account::getNbAccounts() << ';'
        << "total:" << Account::getTotalAmount() << ';'
        << "deposits:" << Account::getNbDeposits() << ';'
        << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int Account::checkAmount(void) const {
    return (this->_amount);
}

void Account::makeDeposit(int deposit) {
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits += 1;
    this->_totalNbDeposits += 1;
    Account::_displayTimestamp();
    std::cout << ' '
    << "index:" << this->_accountIndex << ';'
    << "p_amount:" << (this->_amount - deposit) << ';'
    << "deposit:" << deposit << ';'
    << "amount:" << this->_amount << ';'
    << "nb_deposits:" << this->_nbDeposits << ";"
    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
        Account::_displayTimestamp();
        std::cout << ' '
        << "index:" << this->_accountIndex << ';'
        << "p_amount:" << this->_amount << ';';
    if (this->checkAmount() < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals += 1;
    this->_totalNbWithdrawals += 1;
    std::cout << "withdrawal:"
        << withdrawal << ';'
        << "amount:" << this->_amount << ';'
        << "nb_withdrawals:" << this->_nbWithdrawals << ";"
        << std::endl;
    return (true);
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << ' '
    << "index:" << this->_accountIndex << ';'
    << "amount:" << this->_amount << ';'
    << "deposits:" << this->_nbDeposits << ";"
    << "withdrawals:" << this->_nbWithdrawals << ";"
    << std::endl;
}
