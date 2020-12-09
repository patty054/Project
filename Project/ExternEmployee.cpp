
#include "ExternEmployee.h"
#include <string>

ExternEmployee::ExternEmployee(const std::string& newName, const std::string& newBankAccount,int workHours,
	                           float moneyPerHour)
{
	
	this->id = this->nextId++;
	this->name = newName;
	this->bankAccount = newBankAccount;
	this->newSalary = workHours * moneyPerHour;
}

float ExternEmployee::getSalary()
{
	return this->newSalary;
}

bool ExternEmployee::isInternal()
{
	return false;
}

std::string ExternEmployee::print()
{
	std::string result;
	result = " Employee ID: ";
	result = result + std::to_string(this->id);
	result += "  Extern employee name";
	result = result + this->name;
	result += " Bank Account:";
	result = result + this->bankAccount;
	result += "  Salary:";
	result = result + std::to_string(this->newSalary);
	return result;
}