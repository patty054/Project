#pragma once
#include "Employee.h"

#include<string>

class ExternEmployee :public Employee
{
private:
	int workHours;
	float moneyPerHour;
	float newSalary;

public:
	ExternEmployee();
	ExternEmployee(const std::string& newName, const std::string& newBankAccount,int workHours,
		           float moneyPerHour);
	float getSalary();
	bool isInternal();
    std::string print();
};