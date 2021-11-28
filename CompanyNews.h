#ifndef COMPANYNEWS_H
#define COMPANYNEWS_H
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class CompanyNews {
private:

	//company news can only contain 7 file for 7 days of the week
	String NewsFileName[7];

public:
	//set single file name
	void setFileName(String name) {
		int count = 0;

		for (int i = 0; i < 5; i++, count++) {
			if (NewsFileName[i] == NULL) {
				i = 5;
				//to set count on the right position
				count--;
			}
		}

		NewsFileName[count] = name;
	}

	//set news filenames
	void setNewsFileName(String[] names) {
		for (int i = 0; i < names.length(); i++) {
			NewsFileName[i] = names[i];
		}
	}

	//get new files 
	String* getNewsFileName() {
		return NewsFileName;
	}

	void writeFile() {

		String UserInput;
		ofstream wFile;

		//create a file name
		cout << "Create a File Name: ";
		cin >> UserInput;

		wFile.open(UserInput);

		cout << "Write Company News Here:  ";
		cin >> UserInput;
		wFile << UserInput;
		wFile.close();

	}

	void readNewsFile() {
		boolean found = false;
		ifstream rfile;
		String userInput;
		cout << "Enter a file name to read";
		cin >> userInput;

		for (int i = 0; i < 5; i++) {
			if (NewsFileName[i] == userInput) {
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
