#include "Employee.h"
#include"AccountDB.h"
#include"InternEmployee.h"
#include"ExternEmployee.h"
#include <iostream>
#include <string>

void AccountDB::addInternAccount()
{
	std::string newName;
	std::string newBankAccount;
	float newSalary;
	
	std::cout << "Introdu nume:";
	std::cin >> newName;
	std::cout << "   Introdu un cont:";
	std::cin >> newBankAccount;
	std::cout << "Introdu salariu";
	std::cin >> newSalary;

	InternEmployee newIntEmployee(newName, newBankAccount, newSalary);
	employeeAccount.push_back(&newIntEmployee);
}


void AccountDB::addExternAccount()
{
	std::string newName;
	std::string newBankAccount;
	int workHours;
	float moneyPerHour;

	std::cout << "Introdu nume:";
	std::cin >> newName;
	std::cout << "   Introdu un cont:";
	std::cin >> newBankAccount;
	std::cout << "Introdu nr de ore lucrate:";
	std::cin >> workHours;
	std::cout << "Introdu plata pe ora:";
	std::cin >> moneyPerHour;

	ExternEmployee newExtEmployee(newName,newBankAccount,workHours, moneyPerHour);
	employeeAccount.push_back(&newExtEmployee);
}



		




