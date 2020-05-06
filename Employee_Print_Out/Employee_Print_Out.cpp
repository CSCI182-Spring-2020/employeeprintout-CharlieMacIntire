// Employee_Print_Out.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct Address
{
    string City;
    string state;
};

struct Employee
{
    string Name;
    int DivisionNo;
    Address address;
    EMPLOYEE_TYPE EMPLOYEE_TYPE;
};

enum EMPLOYEE_TYPE{MANAGER, EMPLOYEE, VOLUNTEER};

int main()
{
    Employee Tom;
   
    Tom.Name = "Tom";
    Tom.DivisionNo = 8;
    Tom.address.City = "Seattle";
    Tom.address.state = "Washington";
    Tom.EMPLOYEE_TYPE = EMPLOYEE;


    switch (Tom.EMPLOYEE_TYPE)
    {
    case EMPLOYEE:
        cout << "Employee" << endl;
        break;
    case VOLUNTEER:
        cout << "Volunteer" << endl;
        break;
    default:
        cout << "Manager" << endl;
    }



    cout << Tom.EMPLOYEE_TYPE << " " << Tom.Name << " " << Tom.DivisionNo << " " << Tom.address.City << " " << Tom.address.state << endl;


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
