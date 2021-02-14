#pragma once
#include "student.h"

class Roster {
public:
	int lastIndex = -1;
	const static int numStudents = 5;
	Student* studentRosterArray[numStudents];
	void parse(string row);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int[] courseDays, DegreeType degreeProgram);
	void printAll();
	void printByDegreeType(DegreeType degreeProgram);
	void printInvalidEmails();
	void printAverageCourseDays(string studentID);
	void removeStudentByID(string studentID);
	~Roster();
};