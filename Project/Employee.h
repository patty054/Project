#pragma once

#include <string>


class Employee
{
public:
	std::string getName();
	std::string getBankAccount();
	int getId();
	virtual bool isInternal() = 0;
	virtual std::string print() = 0;

protected:
	static int nextId;
	int id;
	std::string name;
	std::string bankAccount;	
};