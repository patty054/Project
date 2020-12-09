#include "Employee.h"


int Employee::nextId = 0;


int Employee::getId()
{
	return this->id;
}

std::string Employee::getName()
{
	return this->name;
}

std::string Employee::getBankAccount()
{
	return this->bankAccount;
}



