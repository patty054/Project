// Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "InternEmployee.h"
#include "ExternEmployee.h"
#include "AccountDB.h"
#include "Employee.h"

#include <iostream>

void showMenu()
{
	std::cout << "     1- Add intern employee:" << std::endl;
	std::cout << "     2- Add extern employee:" << std::endl;
	std::cout << "     3- Delete employee:" << std::endl;
	std::cout << "     4- Print all employees:" << std::endl;
	std::cout << "     5- Print intern employee:" << std::endl;
	std::cout << "     6- Print extern employee:" << std::endl;
	std::cout << "     7- Pay intern employee:" << std::endl;
	std::cout << "     8- Pay extern employee:" << std::endl;
	std::cout << "     9- Pay intern bonus:" << std::endl;
	std::cout << "     10- Exit:" << std::endl;
}

int main()
{
    //test intern constructor
   // InternEmployee* intern = new InternEmployee("ana", "4321BRD5120",1055 );


    //test intern print 
//    std::cout<<intern->print();
    
   //test extern constructor 
 //ExternEmployee* externEmp = new ExternEmployee("diana", "4321BRD5120", 8,15);

    //test extern print
 //std::cout << externEmp->print();
 
 
 int choice;
 do
 {
	 showMenu();
	 std::cout << "Select option:";
	 std::cin >> choice;
	 AccountDB obj;

	 switch (choice)
	 {
		
	 case 1:
		 std::cout << "Add intern employee: " << std::endl;
		 obj.addInternAccount();
		 break;

	 case 2:
		 std::cout << "Add extern employee: " << std::endl;
		 obj.addExternAccount();
		 break;

	 

	 case 10:
		 system("cls");
		 break;
	 default:
		std::cout << "Invalid input" ;
	 }
 } while (choice != 9);
 
 


 //  delete intern, externEmp;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
