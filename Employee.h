#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iomanip>

using namespace std;

class Employee {

private:

	//employee id
	string Employee_ID;
	//employee position in the company
	string Position;
	//employee hired date in the company
	string Hired_Date;
	//employee email
	string emp_email;
	//employee phone
	string emp_phone;
	//employee username for login
	string emp_username;
	//employee password for login
	string emp_password;
    //employee shifts (needed to fulfill functional requirements)
    string emp_shifts;

public:

	//accessors
	//get employee id
	string getEmployee_ID() {
		return Employee_ID;
	}

	//get employee position
	string getPosition() {
		return Position;
	}

	//get employee hired date
	string getHired_date() {
		return Hired_Date;
	}

	// get employee email
	string getEmp_email() {
		return emp_email;
	}

	//get emp phone number
	string getEmp_phone() {
		return emp_phone;
	}

	//get employee user name
	string getEmp_username() {
		return emp_username;
	}

	//get employee password
	string getEmp_password() {
		return emp_password;
	}

	string getEmp_Shifts()
    {
        return emp_shifts;
    }

	//set employee identification number
	void setEmployee_ID(string id) {
		Employee_ID = id;
	}

	//set Position of employee
	void setPosition(string pt) {
		Position = pt;
	}

	//set employee start date
	void setHired_Date(string dt) {
		Hired_Date = dt;
	}

	//set employee email
	void setEmp_email(string e) {
		emp_email = e;
	}

	//set employee phone number
	void setEmp_phone(string ph) {
		emp_phone = ph;
	}

	//set employee username
	void setEmp_username(string us) {
		emp_username = us;
	}

	//set employee password
	void setEmp_password(string ps) {
		emp_password = ps;
	}

    void setEmp_Shifts(string s)
    {
        emp_shifts = s;
    }

};

#endif
