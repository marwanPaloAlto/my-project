#include<iostream>
using namespace std;
#include"Person.h"
#include"Student.h"

int main()
{                      // INHERITANCE
	Student s1;
	s1.display();    // c++ will call base class constructor because i didnt make one in derived class
	s1.set_age(21);
	s1.set_name("Marwan");
	s1.set_gender("Male");
	s1.display();
	// i can add features to Student class after inheritance

	s1.set_depart("IS");
	s1.set_GPA(3.5);
	




}