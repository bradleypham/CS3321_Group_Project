#include "Manage_Profile.h"
#include "Employee.h"
#include <string>
#include <iostream>
#include <fstream>

#pragma once

struct employeeInfo
{
    string empID;
    string empPosition;
    string empHiredDate;
    string empEmail;
    string empPhone;
    string empUsername;
    string empPassword;
    string empShifts;
};

void Manage_Profile::addProfile()
{
    employeeInfo emp;
    Employee employee;

    cout << "Enter the employee's ID: ";
    cin >> emp.empID;
    employee.setEmployee_ID(emp.empID);
    cout << endl;

    cout << "Enter the employee's position: ";
    cin.ignore();
    getline(cin, emp.empPosition);
    employee.setPosition(emp.empPosition);
    cout << endl;

    cout << "Enter the employee's date of hire: ";
    getline(cin, emp.empHiredDate);
    employee.setHired_Date(emp.empHiredDate);
    cout << endl;

    cout << "Enter the employee's email: ";
    getline(cin, emp.empEmail);
    employee.setEmp_email(emp.empEmail);
    cout << endl;

    cout << "Enter the employee's phone number: ";
    cin >> emp.empPhone;
    employee.setEmp_phone(emp.empPhone);
    cout << endl;

    cout << "Enter the employee's username: ";
    cin.ignore();
    getline(cin, emp.empUsername);
    employee.setEmp_username(emp.empUsername);
    cout << endl;

    cout << "Enter the employee's password: ";
    getline(cin, emp.empPassword);
    employee.setEmp_password(emp.empPassword);
    cout << endl;

    cout << "Enter the employee's shifts: ";
    getline(cin, emp.empShifts);
    employee.setEmp_Shifts(emp.empShifts);
    cout << endl;

    ofstream empFile;
    empFile.open("Employees.txt", ios::app | ios::out);
    empFile << employee.getEmployee_ID() << endl;
    empFile << "Position: " << employee.getPosition() << endl;
    empFile << "Date of Hire: " <<  employee.getHired_date() << endl;
    empFile << "Email: " <<  employee.getEmp_email() << endl;
    empFile << "Phone Number: " <<  employee.getEmp_phone() << endl;
    empFile << "Username: " <<  employee.getEmp_username() << endl;
    empFile << "Password: " <<  employee.getEmp_password() << endl;
    empFile << "Shifts: " <<  employee.getEmp_Shifts() << endl << endl;

    empFile.close();
}

//this function deletes an employee profile by copying everything but the user-specified profile from the existing
//txt file to a new file
void Manage_Profile::deleteProfile()
{
    ifstream employee; //open the existing file
    employee.open("Employees.txt");
    ofstream temporary; //create a temporary file to copy the contents to
    temporary.open("temp.txt");

    string id; //hold the user input
    string line; //hold contents of original file
    cout << "Enter the ID of the employee to remove: ";
    cin >> id; //get user input
    int skipLines = 0; //counter for determining how many lines to skip after the ID
    while (getline(employee, line)) //copy contents of original to string
    {
        if ((line != id) && !(skipLines > 0))
        {
         temporary << line << endl; //write the contents of original to the new file excluding the user-specified profile
        }
        else if (skipLines == 0) //exclude the next 8 lines also
        {
            skipLines = 8;
        }
        else
        {
            --skipLines;
        }
    }

    cout << "The employee with the ID " << id << " has been removed." << endl;
    system("pause");
    employee.close(); //close the files
    temporary.close();
    remove("Employees.txt"); //delete original
    rename("temp.txt", "Employees.txt"); //rename new file to original file
}


void Manage_Profile::viewProfiles()
{
    ifstream employees;
    string profiles;

    employees.open("Employees.txt"); //open the file

    while (getline(employees, profiles))
    {
        cout << profiles << endl;
    }

    system("pause");

    employees.close();
}
