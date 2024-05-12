#include<iostream>
using namespace std;
#include"Student.h"
#include"PostGraduatedStudent.h"
void main()
{
	PostGraduatedStudent s1("Ahmed", "Male", 15, 5, 3.5, "IS", "Nano Technology");
	//s1.display();//Need to make a new display in derived class to display base class attributes + derived class attributes
	//Now because we have a display in the student class c++ will ignore base class display

	                   // AN OVERRIDE HAPPEDED FOR DISPLAY FUNCTION

	s1.display();   // of PostGraduatedStudent (OverRiding)
}


