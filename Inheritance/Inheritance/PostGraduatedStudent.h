#pragma once
#include "Student.h"     //hierarchy >> Multiple Inheritance
class PostGraduatedStudent : public Student
{
private:
	string research_interest;
public:                //reusability
	PostGraduatedStudent(string n, string g, float a, int l, float gp, string d, string ra)
		:Student(n, g, a, l, gp, d)  
	{                                                   // To initialize these six attributes,      
		research_interest = ra;                        // I have to call the base class constructor 
		                                              //And his function is to intitialize them. 
		                                             // ÈÚÏ ßÏå åÙÈØ Çááí İí ÇáæßÇá åäÇ
	}
	void set_research_interest(string rarea)
	{
		research_interest = rarea;
	}

	string get_research_interest(string rarea)
	{
		return research_interest;
	}

	void display()      // reusability
	{
		Student::display();
		cout << " Research interest " << research_interest << endl;
		
	}
};

