#include "User_Interface.h"
//#include "Validate_Login.h"
#include "Manage_Profile.h"
#include "Manage_Profile.cpp"
//#include "Manage_Company_News.h"
//#include "Report_Company_News.h"
//#include "Manage_Salary_Benefits.h"
//#include "Manage_PTO.h"
//#include "Report_PTO.h"
//#include "Scheduling.h"
//#include "Report_Schedule.h"
//#include "Manage_Disciplinary.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

#pragma once

void User_Interface::clearScreen()
//clears the screen
{
    for (int i = 0; i < 40; i++)
    {
        cout << endl;
    }
}

//this validates the admin password and effectively adds a permission system
bool User_Interface::adminPasswordValidation()
{
    string adminPassword = "admin";
    string passwordAttempt;
    cout << "Enter admin password:" << endl;
            cin >> passwordAttempt;
            if (passwordAttempt != adminPassword)
            {
                cout << "Access denied" << endl;
                system("pause");
                return false;
            }
            else
            {
                return true;
            }
}

/*void User_Interface::displayLogin()
//starts the login
{
 Validate_Login validate; //object of the Validate Login class to access the ValidateLogin() function
 validate.ValidateLogin();
 displayMainMenu();
}
*/
void User_Interface::displayEmployeeMenu()
//starts the employee menu
{
Manage_Profile manageProfile; //object to access functions of the Manage Profile Class
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "Employee Menu: " << endl << endl;
    cout << "1. Add Employee Profile" << endl;
    cout << "2. Delete Employee Profile" << endl;
    cout << "3. Edit Employee Profile" << endl; //added this because it's in our functional requirements
    cout << "4. View Employee Profiles" << endl;
    cout << "5. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            clearScreen();
            manageProfile.addProfile();
            break;
        case 2:
            clearScreen();
            manageProfile.deleteProfile();
            break;
        case 3:
            clearScreen();
            manageProfile.deleteProfile();
            manageProfile.addProfile();
            break;
        case 4:
            clearScreen();
            manageProfile.viewProfiles();
            break;
        case 5:
            menuControl = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
}

void User_Interface::displayMainMenu()
//starts the main menu
{
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "Main Menu: " << endl << endl;
    cout << "1. Salary and Benefits" << endl;
    cout << "2. Scheduling" << endl;
    cout << "3. Company News" << endl;
    cout << "4. HR" << endl;
    cout << "5. Profile" << endl;
    cout << "6. Quit" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            if (!adminPasswordValidation())
            {
                break;
            }
            displaySalaryBenefitsMenu();
            break;
        case 2:
            displaySchedulingMenu();
            break;
        case 3:
            displayNewsMenu();
            break;
        case 4:
            display_HR_Menu();
            break;
        case 5:
            if (!adminPasswordValidation())
            {
                break;
            }
            displayEmployeeMenu();
            break;
        case 6:
            cout << "Goodbye";
            std::exit(0);
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
}

void User_Interface::displayNewsMenu()
//starts the news menu
{
    /*
Report_Company_News reportCompanyNews; //object to access functions of the Report Company News Class
Manage_Company_News manageCompanyNews; //object to access functions of the Manage Company News Class
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "Company News Menu: " << endl << endl;
    cout << "1. Add Post" << endl;
    cout << "2. Edit Post" << endl;
    cout << "3. Delete Post" << endl;
    cout << "4. View Posts" << endl;
    cout << "5. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            if (!adminPasswordValidation())
            {
                break;
            }
            manageCompanyNews.addNews();
            break;
        case 2:
            if (!adminPasswordValidation())
            {
                break;
            }
            manageCompanyNews.editNews();
            break;
        case 3:
            if (!adminPasswordValidation())
            {
                break;
            }
            manageCompanyNews.displayNewsForDeletion();
            break;
        case 4:
            reportCompanyNews.ReportNews();
            break;
        case 5:
            menuControl = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
*/
}
void User_Interface::displaySalaryBenefitsMenu()
//starts the salary benefits menu
{
    /*
Manage_Salary_Benefits manageSalaryBenefits; //object to access functions of the Manage Salary Benefits Class
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "Salary and Benefits Menu: " << endl << endl;
    cout << "1. Change Salary" << endl;
    cout << "2. Change Benefits" << endl;
    cout << "3. Direct Deposit" << endl;
    cout << "4. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            manageSalaryBenefits.ManagePay();
            break;
        case 2:
            manageSalaryBenefits.ManageBenefits();
            break;
        case 3:
            manageSalaryBenefits.ManageBankAccounts();
            break;
        case 4:
            menuControl = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
*/
}

void User_Interface::displaySchedulingMenu()

//starts the scheduling menu
{
    /*
Manage_PTO managePTO; //object to access functions of the Manage PTO Class
Report_PTO reportPTO; //object to access functions of the Report PTO Class
Scheduling scheduling; //object to access functions of the Scheduling Class
Report_Schedule reportSchedule; //object to access functions of the Report Schedule Class
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "Scheduling Menu: " << endl << endl;
    cout << "1. View Schedule" << endl;
    cout << "2. Update Schedule" << endl;
    cout << "3. Request PTO" << endl;
    cout << "4. Review PTO" << endl;
    cout << "5. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            reportSchedule.ReportWeekSchedule();
            break;
        case 2:
            if (!adminPasswordValidation())
            {
                break;
            }
            scheduling.ManageSchedule();
            break;
        case 3:
            managePTO.employeePTORequest();
            break;
        case 4:
            if (!adminPasswordValidation())
            {
                break;
            }
            reportPTO.ReportPTO();
            managePTO.ManagePTORequest();
            break;
        case 5:
            menuControl = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
*/
}

void User_Interface::display_HR_Menu()

//starts the HR menu
{
    /*
Manage_Disciplinary complaints; //object to access functions of the Manage Disciplinary Class
bool menuControl = false; //controls while loop
int userChoice = 0; //userChoice is set to 0 since there is no option 0

while (!menuControl)
{
    clearScreen(); //keeps the screen neat
    cout << "HR Menu: " << endl << endl;
    cout << "1. Complaint" << endl;
    cout << "2. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            complaints.ManageComplaint();
            break;
        case 2:
            menuControl = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            system("pause"); //waits for user input before continuing
            break;
    }
}
*/
}
