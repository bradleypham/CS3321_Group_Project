#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H


class User_Interface
{
    public:
        static void clearScreen();
        static bool adminPasswordValidation();
        static void displayLogin();
        static void displayMainMenu();
        static void display_HR_Menu();
        static void displayNewsMenu();
        static void displaySchedulingMenu();
        static void displayEmployeeMenu();
        static void displaySalaryBenefitsMenu();

};

#endif // USER_INTERFACE_H
