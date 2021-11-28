#ifndef SCHEDULE_H
#define SCHEDULE_H



class Schedule {
private:
	//employee hours worked
	int Hours;
	//employee working days of the week
	String Date[[7];
	//employee identification
	int Employee_id;
	//employee time card for schedule
	String Time[7];

public:
	//accesors
	//get hours 
	int getHours() {
		return Hours;
	}

	//get Schedule Dates
	String* getDate() {
		return Date;
	}

	//get employee id
	int getEmployee_ID() {
		return Employee_id;
	}

	//get Time card
	String* getTime() {
		return Time;
	}

	//mutators
	//set Hours worked
	void setHours(int hr) {
		Hours = hr;
	}

	//set Date Schedules
	void setDate(String[] dt) {
		for (int i = 0; i < dt.length(); i++) {
			Date[i] = dt[i];
		}
	}

	//set Employee id 
	void setEmployee_ID(int emp) {
		Employee_Id = emp;
	}

	//set time card
	void setTime(String[] tm) {
		for (int i = 0; i < tm.length(); i++) {
			Time[i] = tm[i];
		}
	}
};

#endif