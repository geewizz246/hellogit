//Implementation File
//Account.cpp
#include "Account.h"

Account::Account(std::string acctName, int initialBalance) {
	name = acctName;
	if (initialBalance > 0)
		balance = initialBalance;
}

void Account::setName(std::string str) {
	name = str;
}

std::string Account::getName() const {
	return name;
}

void Account::setBalance(int acctBalance) {
	balance = acctBalance;
}

int Account::getBalance() const {
	return balance;
}
