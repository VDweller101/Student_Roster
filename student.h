#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"

using std::cout;
using std::string;

class Student {
public:
	static const int courseDaysArraySize = 3;
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int courseDays[];
	DegreeType degreeProgram;

public:
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int[] courseDays, DegreeType degreeProgram);
	-Student();

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getCourseDays();
	string getDegreeProgram();

	void setStudentID(string ID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setCourseDays(int[] courseDays);
	void setDegreeProgram(DegreeType degreeType);

	static void printInfoHeader();

	void printStudent();

};