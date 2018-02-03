//Client File
//main.cpp
#include <iostream>
#include <vector>
#include "Account.h"
using namespace std;

int main() {
	Account a1{ "John", 50 };
	Account a2{ "Cathy", 200 };
	Account a3{ "Georgia", 1500 };
	Account a4{ "Paul", 30 };

	//vector of account type objects
	vector<Account> acctVector;

	acctVector.push_back(a1);
	acctVector.push_back(a2);
	acctVector.push_back(a3);
	acctVector.push_back(a4);
	
	for (unsigned int i = 0; i < acctVector.size(); i++) {
		cout << "Account [" << i << "]: " << acctVector[i].getName() << ", $"
			<< acctVector[i].getBalance() << '\n';
	}

	return 0;
}
