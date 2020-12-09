#pragma once

#include "Employee.h"

#include <string>

class InternEmployee:public Employee
{
private:
	float salary;
	

public:
	InternEmployee();
	InternEmployee( std::string& newName, std::string& newBankAccount,float newSalary);
	float getSalary();
	bool isInternal();
	std::string print();
};