#ifndef MANAGE_PROFILE_H
#define MANAGE_PROFILE_H
#include Employee.h
#include <string>
#include <iostream>
#include <fstream>

#pragma once

class Manage_Profile
{
    public:

    static void addProfile(); //adds a profile to the employee profile txt file
    static void deleteProfile(); //deletes a profile from the employee profile txt file
    static void editProfile(); //edits an employee profile in the txt file
    static void manageLogin(); //edits an employee's login stored in the txt file

};

#endif // MANAGE_PROFILE_H
