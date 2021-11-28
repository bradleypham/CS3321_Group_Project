#include "Manage_Profile.h"
#include Employee.h
#include <string>
#include <iostream>
#include <fstream>

#pragma once

//TODO: implement deleteProfile, editProfile, and file I/O where necessary

struct Employee
{
    int empID;
    string empPosition;
    string empHiredDate;
    string empEmail;
    string empPhone;
    string empUsername;
    string empPassword;
    string empShifts;
};

static void Manage_Profile::addProfile()
{
    Employee emp;

    cout << "Enter the employee's ID: ";
    cin >> emp.empID;
    cout << endl;

    cout << "Enter the employee's position: ";
    cin.ignore();
    getline(cin, emp.empPosition);
    cout << endl;

    cout << "Enter the employee's date of hire: ";
    cin.ignore();
    getline(cin, emp.empHiredDate);
    cout << endl;

    cout << "Enter the employee's email: ";
    cin.ignore();
    getline(cin, emp.empEmail);
    cout << endl;

    cout << "Enter the employee's phone number: ";
    cin.ignore();
    getline(cin, emp.empPhone);
    cout << endl;

    cout << "Enter the employee's username: ";
    cin.ignore();
    getline(cin, emp.empUsername);
    cout << endl;

    cout << "Enter the employee's password: ";
    cin.ignore();
    getline(cin, emp.empPassword);
    cout << endl;

    cout << "Enter the employee's shifts: ";
    cin.ignore();
    getline(cin, emp.empEmail);
    cout << endl;
}
