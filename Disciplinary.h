#ifndef DISCIPLINARY_H
#define DISCIPLINARY_H
#include <string>
#include <iostream>
#include <fstream>


class Disciplinary {
private:
	//Disciplinary id number case
	int complaint_id;
	//hr meeting date
	String MeetingDate;
	//document file name
	String DocumentName[5];
	//Hr representative
	String Hr_Rep;

	


public:

	//constructor
	Disciplinary() {
		complaint_id = 0;
		MeetingDate = " ";
		Hr_Rep = " ";
	}

	Disciplinary(int id, String date, String[] names, String hr) {
		complaint_id = id;
		MeetingDate = date;
		for (int i = 0; i < names.length(); i++) {
			DocumentName[i] = names[i];
		}
		Hr_Rep = hr;

	}

	//accesors

	//return complaint id case number
	int getComplaintId() {
		return complaint_id;
	}

	//return meeting date 
	String getMeetingDate() {
		return MeetingDate;
	}

	//return employee File Names

	String * getDocumentNames() {
		return DocumentName;
	}
	// return hr representative name
	String getHrRep() {
		return Hr_Rep;
	}

	//mutators
	//set complaint id
	void setComplantId(int id) {
		complaint_id = id;
	}
	//set meeting date
	void setMeetingDate(Strng m) {
		MeetingDate = m;
	}
	//set documents names
	void setDocumentName(String n) {

		for (int i = 0; i < 5; i++) {

			if (DocumentName[i] == NULL) {
				i = 5;
				DocumentName[i] = n;
			}
		}
	}

	void setHrRep(String hr) {
		Hr_Rep = hr;
	}

	void writeFile() {
			String UserInput;
			ofstream wFile;

			//create a file name
			cout << "Create a File Name: ";
			cin >> UserInput;

			wFile.open(UserInput);

			cout << "Write Your complant Here: ";
			cin >> UserInput;
			wFile << UserInput;
			wFile.close();

		}

	void readFile(String fname) {
		boolean found = false;
		ifstream rfile;
		String userInput;
		cout << "Enter a file name to read";
		cin >> userInput;

		for (int i = 0; i < 5; i++) {
			if (DocumentName[i] == userInput) {
				i = 5;
				found = true;
			}
		}

		if (found) {
			String x;
			rfile.open(fname);
			while (rfile >> x) {
				cout << x << " ";
			}
			rfile.close();
		}
		else {
			cout << "No file found.";
		}
	}



};

#endif