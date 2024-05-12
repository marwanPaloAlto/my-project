#include <iostream>
#include <string>
using namespace std;

struct student
{
	int sno;
	string name;
	float gpa;
	float marks[3];
};

int main()
{
	student s1;
	s1.sno = 1290;
	s1.name = "Mohamed Ibrahim";
	s1.gpa = 4.5;
	s1.marks[0] = 50;     //array in struct.
	s1.marks[1] = 80;
	s1.marks[2] = 90;

	student x[5];
	for (int i = 0; i < 5; i++)
	{
		cout << " enter student data sno , sname, gba \n";
		cin >> x[i].sno >> x[i].name >> x[i].gpa;
	}

	x[0].sno = 1000;      //struct in array.
	x[1].name = "Ahmed";
	x[2].gpa = 3.5;



}
