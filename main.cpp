#include "roster.h"

using namespace std;


int main()
{
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Justin,Coffey,jcoff57@wgu.edu,31,3,4,1,SOFTWARE"
	};

	const int numStudent = 5;

	Roster roster;

	for (int i = 0; i < numStudent; i++)
	{
		roster.parse(studentData[i]);
	}


}
