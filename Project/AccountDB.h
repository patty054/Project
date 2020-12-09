#pragma once
#include "Employee.h"
#include"InternEmployee.h"
#include<vector>
#include<string>

class AccountDB
{
public:
	void addInternAccount();
	void addExternAccount();
	void removeEmployee();
	std::string printAll();
	std::string printInternEmpployee();
	std::string printExternEmployee();

private:
	std::vector<Employee*> employeeAccount;
};