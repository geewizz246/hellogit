//Header File
//Account.h
#include <iostream>
#include <string>

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
	Account(std::string, int);

	void setName(std::string);
	
	std::string getName() const;
	
	void setBalance(int);

	int getBalance() const;

private:
	std::string name;
	int balance{ 0 };
};

#endif
