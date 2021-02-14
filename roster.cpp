#include "roster.h"
using std;

void Roster::parse(string studentData) {
	//Count number of commas to ensure data input is in correct format. Number should be 8.
	cout << "Parsing Student Data: " << studentData;
	size_t n = count(studentData.begin(), studentData.end(), ",");
	if (n != 8) {
		//Inform user their string was inputted incorrectly
		//--Maybe put string back in to input text so user can fix mistake?
		//Return function
	}
	string[] studentStrings = new string[8];
	int last = 0;
	int next = 1;
	for (int i = 0; i < 8; i++)
	{
		if (i < 7) {
			next = studentData.find(",");
			studentStrings[i] = studentData.substr(last, next);
			last = next + 1;
		}
		else {
			studentString[7] = studentData.substr(last, studentData.length - 1);
		}
	}

}