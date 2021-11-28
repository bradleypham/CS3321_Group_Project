#ifndef PTO_H
#define PTO_H

class Pto {

private:
	int pto_id;
	boolean pto_status;
	String date;
	int employee_id;

public:
	//constructor
	Pto() {
		pto_id = 0;
		pto_status = false;
		date = " ";
		employee_id = 0;
	}

	//2nd constructor parameters
	Pto(int id, boolean st, String dt, int emp) {
		pto_id = id;
		pto_status = st;
		date = dt;
		employee_id = emp;
	}


	//accessors
	//get paid time off id
	int getPTO_ID() {
		return pto_id;
	}

	//get paid time off status 
	boolean getStatus() {
		return pto_status;
	}

	//get paid time off Date
	String getDate() {
		return date;
	}

	//get employee id
	int getEmployee_ID() {
		return employee_id;
	}

	//mutators 
	//set paid time off id
	void setPTO_ID(int i) {
		pto_id = i;
	}

	//set status pto
	void setStatus(boolean st)P {
		pto_status = st;
	}

	//set Date for pto
	void setDate(String Dt) {
		date = dt;
	}

	//set Employee id
	vod setEmployee_ID(int emp) {
		employee_id = emp;
	}
};

#endif