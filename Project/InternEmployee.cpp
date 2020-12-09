#include "AccountDB.h"
#include "InternEmployee.h"
#include <string>

InternEmployee::InternEmployee(std::string& newName, std::string& newBankAccount,float newSalary)
{	
	this->id = nextId++;
	this->name = newName;
	this->bankAccount = newBankAccount;
	this->salary = newSalary;
}

float InternEmployee::getSalary()
{
	return this->salary;
}
bool InternEmployee::isInternal()
{
	return true; 
}
std::string  InternEmployee::print()
{
	std::string result;
	result = "EmployeeID: ";
	result = result + std::to_string(this->id);
	result +="  Intern Employee Name:";
	result=result+this->name;
	result += "  Bank Account:";
	result = result + this->bankAccount;
	result += "  Salary:";
	result = result +std::to_string( this->salary);
	return result;
}