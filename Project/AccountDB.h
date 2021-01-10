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


private:
	std::vector<Employee*> employeeAccount;
};
