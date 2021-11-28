#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {

private:

	//employee id
	int Employee_ID;
	//employee position in the company
	String Position;
	//employee hired date in the company
	String Hired_Date;
	//employee email
	String emp_email;
	//employee phone
	int emp_phone;
	//employee username for login
	String emp_username;
	//employee password for login
	String emp_password;
    //employee shifts (needed to fulfill functional requirements)
    string emp_shifts;

public:

	//accesors
	//get employee id
	int getEmployee_ID() {
		return Employee_ID;
	}

	//get employee position
	String getPosition() {
		return Position;
	}

	//get employee hired date
	String getHired_date() {
		return Hired_Date;
	}

	// get employee email
	String getEmp_email() {
		return emp_email;
	}

	//get emp phone number
	int getEmp_phone() {
		retunr emp_phone;
	}

	//get employee user name
	String getEmp_username() {
		return emp_username;
	}

	//get employee password
	String getEmp_password() {
		return emp_password;
	}

	string getEmp_Shifts()
    {
        return emp_shifts;
    }

	//set employee identification number
	void setEmployee_ID(int id) {
		Employee_ID = id;
	}

	//set Position of employee
	void setPosition(String pt) {
		Position = pt;
	}

	//set employee start date
	void setHired_Date(String dt) {
		Hired_Date = dt;
	}

	//set employee email
	void setEmp_email(String e) {
		emp_email = e;
	}

	//set employee phone number
	void setEmp_phone(int ph) {
		emp_phone = ph;
	}

	//set employee username
	void setEmp_username(String us) {
		emp_username = us;
	}

	//set employee password
	void setEmp_password(String ps) {
		emp_password = ps;
	}

    void setEmp_Shifts(string s)
    {
        emp_shifts = s;
    }

};

#endif
