#include "student.h"

Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	this->courseDays = { 0, 0, 0 };
	this->degreeProgram = DegreeType.SECURITY;
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int[] courseDays, DegreeType degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->courseDays = courseDays;
	this->degreeProgram = degreeProgram;
}

Student::Student() {}

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmailAddress() { return this->emailAddress; }
int Student::getAge() { return this->age; }
int* Student::getCourseDays() { return this->courseDays; }
string Student::getDegreeProgram() { return this->degreeProgram; }

void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::getStudentEmailAddress(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setStudentAge(int age) { this->age = age; }
void Student::setStudentCourseDays(int* courseDays) {
	for (int i = 0; i < courseDaysArraySize; i++)
	{
		this->courseDays[] = courseDays[];
	}
void Student::setDegreeProgram(DegreeType degreeProgram) { this->degreeProgram = degreeProgram; }

void Student::printInfoHeader() {
	std::cout << "Format: Student ID | First Name | Last Name | Email Address | Age | Course Days | Degree Program\n";
}

void Student::printStudent() {
	cout << this->getStudentID() << '\t';
	cout << this->getFirstName() << '\t';
	cout << this->getLastName() << '\t';
	cout << this->getEmailAddress() << '\t';
	cout << this->getAge() << '\t';
	for (int i = 0; i < courseDaysArraySize; i++)
	{
		cout << this->courseDays[i];
		if (i < courseDaysArraySize - 1) {
			cout << ','
		}
		else {
			cout << '\t'
		}
	}
	cout << this->getDegreeProgram() << '\t';
}

