#include "User_Interface.h"
#include "Validate_Login.h"
#include "Manage_Profile.h"
#include "Manage_Company_News.h"
#include "Report_Company_News.h"
#include "Manage_Salary_Benefits.h"
#include "Manage_PTO.h"
#include "Report_PTO.h"
#include "Scheduling.h"
#include "Report_Schedule.h"
#include "Manage_Disciplinary.h"
#include <iostream>

//REMEMBER TO CREAT SOME PERMISSION CONTROL SYSTEM IN ANOTHER CLASS AND UTILIZE IT IN THIS ONE

void User_Interface::clearScreen()
//clears the screen
{
    for (int i = 0; i < 40; i++)
    {
        cout << endl;
    }
}

void User_Interface::displayLogin()
//starts the login
{
 Validate_Login validate; //object of the Validate Login class to access the ValidateLogin() function
 validate.ValidateLogin();
 displayMainMenu();
}

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
    cout << "3. Change Password" << endl;
    cout << "4. Exit to Main Menu" << endl;

    cout << "Enter your choice and press Enter or Return: ";

    cin >> userChoice;

    switch (userChoice)
    {

        case 1:
            manageProfile.addProfile();
            break;
        case 2:
            manageProfile.deleteProfile();
            break;
        case 3:
            manageProfile.manageLogin();
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
            displayEmployeeMenu();
            break;
        case 6:
            cout << "Goodbye";
            return 0;
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
            manageCompanyNews.addNews();
            break;
        case 2:
            manageCompanyNews.editNews();
            break;
        case 3:
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
}

void User_Interface::displaySalaryBenefitsMenu()
//starts the salary benefits menu
{
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
}

void User_Interface::displaySchedulingMenu()
//starts the scheduling menu
{
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
            scheduling.ManageSchedule();
            break;
        case 3:
            managePTO.employeePTORequest();
            break;
        case 4:
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
}

void User_Interface::display_HR_Menu()
//starts the HR menu
{
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
}
