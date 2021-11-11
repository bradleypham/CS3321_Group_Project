#include "User_Interface.h"
#include <iostream>

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

}

void User_Interface::displayEmployeeMenu()
//starts the employee menu
{

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

}

void User_Interface::displaySalaryBenefitsMenu()
//starts the salary benefits menu
{

}

void User_Interface::displaySchedulingMenu()
//starts the scheduling menu
{

}

void User_Interface::display_HR_Menu()
//starts the HR menu
{

}
