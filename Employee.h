#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
    public:
    int getEmployee_ID()
    {
        return Employee_ID;
    }

    int getEmp_Shifts()
    {
        return emp_shifts;
    }

    string getPosition()
    {
        return position;
    }

    string getHiredDate()
    {
        return Hired_Date;
    }

    string getEmp_email()
    {
        return emp_email;
    }

    int getEmp_phone()
    {
        return emp_phone;
    }

    string getEmp_Username()
    {
        return emp_username;
    }

    string getEmp_Password()
    {
        return emp_password;
    }

    void setEmployee_ID(int e)
    {
        Employee_ID = e;
    }

    void setEmp_Shifts(string s)
    {
        emp_shifts = s;
    }

    void setPosition(string p)
    {
        position = p;
    }

    void setHiredDate(string h)
    {
        Hired_Date = h;
    }

    void setEmp_email(string e)
    {
        emp_email = e;
    }

    void setEmp_phone(int e)
    {
        emp_phone = e;
    }

    void setEmp_Username(string e)
    {
        emp_username = e;
    }

    void setEmp_Password(string e)
    {
        emp_password = e;
    }

    private:
        int Employee_ID;
        string position;
        string Hired_Date;
        string emp_email;
        int emp_phone;
        string emp_username;
        string emp_password;
        string emp_shifts;
};

#endif // EMPLOYEE_H
