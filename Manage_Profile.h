#ifndef MANAGE_PROFILE_H
#define MANAGE_PROFILE_H
#include "Employee.h"
#include <string>
#include <iostream>
#include <fstream>

#pragma once

class Manage_Profile
{
    public:

    void addProfile(); //adds a profile to the employee profile txt file
    void deleteProfile(); //deletes a profile from the employee profile txt file
    void viewProfiles(); //displays all employee profiles
};

#endif // MANAGE_PROFILE_H
